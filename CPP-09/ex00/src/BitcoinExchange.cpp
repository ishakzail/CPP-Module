/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:24 by izail             #+#    #+#             */
/*   Updated: 2023/03/27 17:32:28 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

std::string _error;

BitcoinExchange::BitcoinExchange(std::string _filename) :  _linesInput(0) , _linesCSV(0)
{
    readCsvFile("data/data.csv");
    readInputFile(_filename);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}

BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    if (this != &obj){
        _data = obj._data;
        _linesCSV = obj._linesCSV;
        _linesInput = obj._linesInput;
        _value = obj._value;
        _date = obj._date;
    }
    return *this;
}

void    BitcoinExchange::readCsvFile(std::string _csvFile)
{
    std::string line;
    std::ifstream _file(_csvFile);
    while(std::getline(_file, line))
        storeCsvLines(line);
}

void    BitcoinExchange::readInputFile(std::string _inputFile)
{
    std::string line;
    int         lineNumber = 0;
    std::ifstream _file(_inputFile);
    if (_file.peek() == EOF)
    {
        std::cout << "File is empty" << std::endl;
        return;
    }
    while(std::getline(_file, line))
    {
        lineNumber++;
        if (lineNumber == 1)
            continue;
        parseInputLine(line);
    }
        // std::cout << line << std::endl;
        // check 
}

std::string ft_trim(std::string _line)
{
    // find the position of the first non-whitespace character
    size_t start = _line.find_first_not_of(" \t\n\r");

    // if the string is all whitespace, return an empty string
    if (start == std::string::npos) {
        return "";
    }

    // find the position of the last non-whitespace character
    size_t end = _line.find_last_not_of(" \t\n\r");

    // extract the trimmed substring
    return _line.substr(start, end - start + 1);
}


void    BitcoinExchange::checkInputLine(std::string date, float value)
{
    if (parseDate(date) == 0)
        return;
    if (checkValue(value) == 0)
        return;
    proccessExchange(date, value);
}


void    BitcoinExchange::proccessExchange(std::string date, float value)
{
    // (void)date;
    // (void)value;
    // std::cout << "lower date ======== " << _data.lower_bound(date)->first << std::endl;
    std::cout << date << " ==> " << value << " = " <<  _data.lower_bound(date)->second * value << std::endl;
}

int    BitcoinExchange::checkValue(float _value)
{
    if (_value < 0)
    {
        std::cout << "Error: Not a positive number" << std::endl;
        return (EXIT_SUCCESS);
    }
    if (_value > 1000)
    {
        std::cout << "Error: too large a number" << std::endl;
        return(EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

int    BitcoinExchange::parseDate(std::string date)
{
    int     year;
    int     month;
    int     day;

    size_t first_delim_pos = date.find('-');  
    size_t second_delim_pos = date.find('-', first_delim_pos + 1);

    year = atoi((date.substr(0, first_delim_pos)).c_str());
    month = atoi((date.substr(first_delim_pos + 1, second_delim_pos - first_delim_pos - 1)).c_str());
    day = atoi((date.substr(second_delim_pos + 1)).c_str());

    if (checkYear(year) == 0 || checkMonth(month) == 0 || checkMonthDay(month, day) == 0)
    {
        std::cerr << "Error: Bad input ==> " << date << std::endl;
        return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

int     BitcoinExchange::checkYear(int _year)
{
    if (_year >= 2009 && _year <= 2023)
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}

int     BitcoinExchange::checkMonth(int _month)
{
    if (_month >= 1 && _month <= 12)
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}

int     BitcoinExchange::checkMonthDay(int _month, int _day)
{
    if (_day >= 1 && _day <= 31)
    {
        if ((_month == 2) && _day > 28)
            return (EXIT_SUCCESS);
        if ((_month == 4 || _month == 6 || _month == 9 || _month == 11) && (_day > 30))
                return (EXIT_SUCCESS);
        return (EXIT_FAILURE);
    }
    else
        return (EXIT_SUCCESS);
}
// void    parseValue(float _value)
// {
    
// }

void    BitcoinExchange::parseInputLine(std::string _inputLine)
{
    // std::cout << _inputLine.at(_inputLine.length()-1);
    std::string date;
    std::string value;

    // std::cout << _inputLine  << std::endl;
    
    if (_inputLine.find("|") != std::string::npos)
    {
        date    = ft_trim(_inputLine.substr(0, _inputLine.find("|")));
        value   = ft_trim(_inputLine.substr(_inputLine.find("|")+ 1, _inputLine.length()));
        checkInputLine(date, atof(value.c_str()));
    }
    else
        std::cout << "Error: bad input => " << _inputLine << std::endl;
}

void    BitcoinExchange::storeCsvLines(std::string _csvLine)
{
    if (_linesCSV != 0)
    {
        std::string date = _csvLine.substr(0, _csvLine.find(','));
        std::string val  = _csvLine.substr(_csvLine.find(',') + 1, _csvLine.length());
        _data.insert(std::pair<std::string, float>(date, std::atof(val.c_str())));
    }
    _linesCSV++;
}

BitcoinExchange::~BitcoinExchange()
{}
