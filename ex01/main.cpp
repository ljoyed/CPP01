/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:30:08 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/29 18:12:58 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 10


int main(void)
{
    if (N < 0)
    { 
        std::cerr << "Error: N cannot be negative." << std::endl;
        return (1);
    }
    
    Zombie *zombies = zombieHorde(N, "Zack");
    int i;

    i = 0;
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return (0);
}