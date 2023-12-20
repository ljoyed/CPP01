/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:43:50 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/29 16:53:18 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_debug = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	_info = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	_warning = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
	_error = "This is unacceptable! I want to speak to the manager now.";
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << _debug << std::endl;
}
	
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << _info << std::endl;
}
	
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << _warning << std::endl;
}
	
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << _error << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int caseLevel;
	void (Harl::*selector[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	caseLevel = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			caseLevel = i;
			break;
		}
	}

	switch(caseLevel)
	{
		case 0:
			(this->*(selector[0]))();
			std::cout << std::endl;
		case 1:
			(this->*(selector[1]))();
			std::cout << std::endl;
		case 2:
			(this->*(selector[2]))();
			std::cout << std::endl;
		case 3:
			(this->*(selector[3]))();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

Harl::~Harl(){}