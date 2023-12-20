/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:48:26 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/25 16:01:44 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void announce( void );
	void set_name(std::string name);

private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif