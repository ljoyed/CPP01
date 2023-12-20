/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:43:19 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/28 15:36:53 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

void replaceString(std::string& str, const std:: string& s1, const std::string& s2)
{
    size_t i = 0;
    size_t s1_len = s1.length();
    size_t s2_len = s2.length();
    
    while ((i = str.find(s1, i)) != std::string::npos)
	{
        str = str.substr(0, i) + s2 + str.substr(i + s1_len);
        i += s2_len;
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
	{
        std::cerr << "To use this program, type : " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);
	std::string content;
	std::string line;
	std::string replaced;
    
	if (s1.empty() || s2.empty())
	{
		std::cerr << "s1 or s2 cannot be empty." << std::endl;
		return 1;
	}
    std::ifstream iFile(filename.c_str());
    if (!iFile)
	{
        std::cerr << "Failed to open : " << filename << std::endl;
        return 1;
    }
    while (std::getline(iFile, line))
	{
        replaceString(line, s1, s2);
        content += line + "\n";
    }
    iFile.close();

    replaced = filename + ".replace";
    std::ofstream oFile(replaced.c_str());
    if (!oFile)
	{
        std::cerr  << "Failed to open : " << replaced << std::endl;
        return 1;
    }
    oFile << content;
    oFile.close();

    std::cout << "Replacement Done." << std::endl;
    return 0;
}
