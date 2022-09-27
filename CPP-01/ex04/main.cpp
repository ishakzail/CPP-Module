/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:11:59 by izail             #+#    #+#             */
/*   Updated: 2022/09/27 11:18:49 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int check_file_empty(std::ifstream *ifile)
{
    std::string check;
    if (!getline(*ifile, check))
        return (0);
    return (1);
}

int main(int ac, char **av)
{
   std::string line;
   std::string filename;
   std::ifstream in_file;
   std::ofstream out_file;
   std::string check;
   // std::cout << "ac == " << ac << std::endl;
   if (ac != 2)
   {
      std::cout << "Only three arguments are allowed" << std::endl;
      return (0);
   }
   filename = av[1];
   std::string newF = filename + ".replace";
   
   in_file.open(filename);
   if(!in_file.good()|| !in_file.is_open())
   {
      std::cout << "Error file " << std::endl;
      return (0);
   }
   if(!check_file_empty(&in_file))
   {
      std::cout << "File is empty" << std::endl;
      return (0);
   }
   out_file.open(newF);
   if (!out_file.is_open())
   {
      std::cout << "Error : Cannot open file " << std::endl;
      return (0);
   }
   while (getline(in_file,newF))
   {
      out_file << line;
   }

   in_file.close();
   out_file.close();
   return 0;
}