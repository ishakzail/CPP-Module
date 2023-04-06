/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:24 by izail             #+#    #+#             */
/*   Updated: 2023/04/06 14:44:50 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

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

    std::ifstream _file(_inputFile.c_str());
    if (_file.peek() == EOF)
    {
        std::cout << "File is empty" << std::endl;
        return;
    }
    while(std::getline(_file >> std::ws, line))
    {
        parseInputLine(line);
        count++;
    }
}


int BitcoinExchange::ft_is_digit(std::string str)
{
    for(size_t i = 0; i < str.size() ; i++)
    {
        if (str[0] == '+' || str[0] == '-' )
            i++;
        if (!std::isdigit(str[i]))
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}


int BitcoinExchange::ft_is_digit_point(std::string str)
{
	for( size_t i = 0; i < str.size(); i++)
	{
        if (str[0] == '+' || str[0] == '-' )
            i++;
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
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


void    BitcoinExchange::checkInputLine(std::string date, std::string value)
{
    if (!parseDate(date))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return;
    }
    if (!checkValue(value))
        return;
    std::cout << date << " ==> " << this->_value << " = " <<  _data.lower_bound(date)->second * this->_value << std::endl;
}


int    BitcoinExchange::checkValue(std::string _value)
{
    int dotCount = 0;
    if (_value.empty() || _value.at(0) == '.' || _value.at(_value.size() - 1) == '.')
	{
		std::cout << "Error: bad input => " << _value << std::endl;
		return (EXIT_FAILURE);
	}
    for(std::string::iterator it = _value.begin(); it != _value.end(); ++it)
    {
        if (*it == '.')
            dotCount++;   
    }
    if (dotCount >= 2)
    {
        std::cout << "Error: bad input => " << _value << std::endl;
		return (EXIT_FAILURE);
    }
	if (!ft_is_digit_point(_value))
	{
		std::cout << "Error: bad input => " << _value << std::endl;
		return (EXIT_FAILURE);
	}
    this->_value = std::atof(_value.c_str());
    if (this->_value < 0)
    {
        std::cout << "Error: Not a positive number" << std::endl;
        return (EXIT_SUCCESS);
    }
    if (this->_value > 1000)
    {
        std::cout << "Error: too large a number" << std::endl;
        return(EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

int    BitcoinExchange::parseDate(std::string date)
{
    std::string     year;
    std::string     month;
    std::string     day;

    // check the date here need to be fixed (date.size() should be 10)

    size_t first_delim_pos = date.find('-');  
    size_t second_delim_pos = date.find('-', first_delim_pos + 1);
    
    year = (date.substr(0, first_delim_pos)).c_str();
    month = (date.substr(first_delim_pos + 1, second_delim_pos - first_delim_pos - 1)).c_str();
    day = (date.substr(second_delim_pos + 1)).c_str();

     
    if (year.size() != 4 || month.size() != 2 || day.size() != 2)
        return (EXIT_SUCCESS);
    if (!ft_is_digit(year) || !ft_is_digit(month) || !ft_is_digit(day))
        return (EXIT_SUCCESS);
    if (checkYear(atoi(year.c_str())) == 0 || checkMonth(atoi(month.c_str())) == 0 || checkMonthDay(atoi(month.c_str()), atoi(day.c_str())) == 0)
        return (EXIT_SUCCESS);
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

    if (_inputLine.find("|") != std::string::npos)
    {
        date    = ft_trim(_inputLine.substr(0, _inputLine.find("|")));
        value   = ft_trim(_inputLine.substr(_inputLine.find("|")+ 1, _inputLine.length()));
        if (count == 0 && date == "date" && value == "value")
            return;
        if (count == 0 && (date != "date" || value != "value"))
        {
            std::cout << "Error : invalid Header" << std::endl;
            return;
        } 
        if (count != 0 && (ft_is_digit(value) || ft_is_digit_point(value)))
        {
            checkInputLine(date, value);
        }
        else
        {
            std::cout << "Error: bad input => " << _inputLine  << "*****" << std::endl;
            return;
        }
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
