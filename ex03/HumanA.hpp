/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:38:31 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/26 18:09:15 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
  
  private:
	Weapon &_weapon;
	std::string _name;
};

#endif