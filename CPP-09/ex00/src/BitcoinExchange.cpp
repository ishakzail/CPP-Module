/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:24 by izail             #+#    #+#             */
/*   Updated: 2023/04/04 22:24:41 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

std::string _error;
int count = 0;

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
    std::ifstream _file(_csvFile.c_str());
    while(std::getline(_file, line))
        storeCsvLines(line);
}

void    BitcoinExchange::readInputFile(std::string _inputFile)
{
    std::string line;
    std::string date;
    std::string value;
    int pos;
    // int count;

    std::ifstream _file(_inputFile.c_str());
    if (_file.peek() == EOF)
    {
        std::cout << "File is empty" << std::endl;
        return;
    }
    // count = 0;
    pos = 0;
    while(std::getline(_file >> std::ws, line))
    {
        // std::cout << "getline == " << line << std::endl; 
        if (pos == 0 && isHeader(line) != 1)
        {
            std::cout << "Error : Invalid header" << std::endl;
            // break;   
        }
        parseInputLine(line);
        pos++;
    }
}

int BitcoinExchange::isHeader(std::string &head)
{
    std::string token_date;
    std::string token_value;
    

    token_date = ft_trim(head.substr(0, head.find("|")));
    token_value = ft_trim(head.substr(head.find("|") + 1, head.length()));
    
    // std::cout << "token_date ==" << token_date << std::endl;
    // std::cout << "token_value ==" << token_value << std::endl;
    if (!token_date.compare("date") && !token_value.compare("value"))
    {
        count++;   
        return (count);
    }
    // else
    // {
    //     std::cout << "Error : bad input => " << head << "--" <<std::endl;
    //     return (EXIT_SUCCESS);
    // }
    return (EXIT_SUCCESS);    
}

std::string ft_trim(std::string _line) 
{

    size_t first = _line.find_first_not_of(" \t\n\r");
	if (first == std::string::npos)
		return ("");
	_line.erase(0, first);
	size_t last = _line.find_last_not_of(" \t\n\r");
	_line.erase(last + 1);
	return (_line);
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

void  BitcoinExchange::parseHeader(std::string line)
{
    std::cout << "parseHeader ----" << line << std::endl;
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
        // std::cerr << "Error: Bad input => " << date << std::endl;
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


void    BitcoinExchange::parseInputLine(std::string _inputLine)
{
    std::string date;
    std::string value;


    // std::cout << "HEADER VALUE == " << isHeader(_inputLine) << std::endl;
        std::cout << "parseInputLine ===" << _inputLine << std::endl;
    
    // if (isHeader(_inputLine) != 1)
    // {
    //     std::cout << "Error: bad input => " << _inputLine  << "--" << std::endl;
    //     return;
    // }
    if (_inputLine.find("|") != std::string::npos)
    {
        date    = ft_trim(_inputLine.substr(0, _inputLine.find("|")));
        value   = ft_trim(_inputLine.substr(_inputLine.find("|")+ 1, _inputLine.length()));
        checkInputLine(date, atof(value.c_str()));
    }
    else
        std::cout << "Error: bad input => " << _inputLine  << "--" << std::endl;
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
