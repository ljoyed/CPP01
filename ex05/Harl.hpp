/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:26:21 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/29 11:55:13 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstring>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	
	private:
		std::string _debug;
		std::string _info;
		std::string _warning;
		std::string _error;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif