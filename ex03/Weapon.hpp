/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:01:45 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/26 17:26:45 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string first_weapon);
        ~Weapon();
        const std::string &getType(void) const;
        void setType(std::string new_weapon);

    private:
        std::string _type;
};

#endif