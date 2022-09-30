/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:11:59 by izail             #+#    #+#             */
/*   Updated: 2022/09/28 14:18:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_replace(std::ifstream *in_file, std::ofstream *out_file, std::string str1, std::string str2)
{
    std::string line;
    getline(*in_file, line, '\0');
    size_t pos = line.find(str1);
    while (pos != std::string::npos)
    {
        line =  line.erase(pos, str1.length());
        line = line.insert(pos,str2);
        pos = line.find(str1, pos + str2.length());
    }
    *out_file << line;
}

int main(int ac, char **av)
{
   std::string filename;
   std::ifstream in_file;
   std::ofstream out_file;
   
   filename = av[1];
   std::string newF = filename + ".replace";
   
   if (ac != 4)
   {
      std::cout << "Only for arguments are allowed" << std::endl;
      return (0);
   }
   in_file.open(filename);
   if(!in_file.good()|| !in_file.is_open())
   {
      std::cout << "Error file " << std::endl;
      return (0);
   }
   in_file.seekg(0, std::ios::end);  
   if (in_file.tellg() == 0) 
   {    
      std::cout << "File is empty" << std::endl;
      return (0);    
   }
   in_file.seekg(0);
   out_file.open(newF);
   if (!out_file.is_open())
   {
      std::cout << "Error : Cannot open file " << std::endl;
      return (0);
   }
   ft_replace(&in_file, &out_file, av[2], av[3]);
   in_file.close();
   out_file.close();
   return 0;
}