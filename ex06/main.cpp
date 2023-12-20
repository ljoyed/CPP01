/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:57:17 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/29 17:00:47 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    std::string input;

    if (argc != 2)
    {
        std::cout << "To run program, type : " << argv[0] << " <LEVEL>" << std::endl;
        std::cout << "Choose LEVEL from [DEBUG, INFO, WARNING, ERROR]. LEVEL should be uppercase only." << std::endl;
        std::cout << "Example : " << argv[0] << " DEBUG" << std::endl;
        return (1);
    }
    else
    {
        input = argv[1];
        harl.complain(argv[1]);
        return (0);
    }
}
