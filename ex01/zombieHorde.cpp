/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:39:43 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/25 16:03:21 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        horde[i].set_name(name);
        i++;
    }
    return (horde);
}