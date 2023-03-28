/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:26 by izail             #+#    #+#             */
/*   Updated: 2023/03/28 00:41:08 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <climits> 
#include <map>


class BitcoinExchange
{
    private :
        std::map<std::string, float, std::greater<std::string> >    _data;
        float                           _value;
        std::string                     _date;
        int                             _linesInput;
        int                             _linesCSV;
    public:
        
        /* Canonical form */
        BitcoinExchange();
        BitcoinExchange(std::string _filename);
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange operator=(const BitcoinExchange &obj);

        /*Function*/
        void    readCsvFile(std::string _csvFile);
        void    readInputFile(std::string _inputFile);
        void    storeCsvLines(std::string _csvLine);
        void    proccessExchange(std::string date, float value);

        void    checkInputLine(std::string date, float value);
        void    parseInputLine(std::string _inputLine);
        int     checkValue(float _value);
        int     parseDate(std::string date);
        int     checkYear(int _year);
        int     checkMonth(int _month);
        int     checkMonthDay(int _month, int _day);

        void    parseHeader(std::string line);

        ~BitcoinExchange();
      
};
        std::string ft_trim(std::string _line);
        int isHeader(std::string &line );