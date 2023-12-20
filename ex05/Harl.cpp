/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:31:18 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/29 12:53:13 by loandrad         ###   ########.fr       */
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
	std::cout << _debug << std::endl;
}
	
void Harl::info(void)
{
	std::cout << _info << std::endl;
}
	
void Harl::warning(void)
{
	std::cout << _warning << std::endl;
}
	
void Harl::error(void)
{
	std::cout << _error << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*selector[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*(selector[i]))();
			return;
		}
	}
}

Harl::~Harl(){}