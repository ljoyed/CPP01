/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:05:36 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/30 12:14:15 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string first_weapon)
{
    this->_type = first_weapon;
}

Weapon::~Weapon(){}

const std::string &Weapon::getType(void) const
{
    return (this->_type);
}
        
void Weapon::setType(std::string new_weapon)
{
    this->_type = new_weapon;
}
