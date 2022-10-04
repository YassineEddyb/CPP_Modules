/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:23:46 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/10/04 15:51:28 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    if (N <= 0)
        return (NULL);

    Zombie *zombies = new Zombie[N];

    i = 0;
    while(i < N) {
        zombies[i].setName(name);
        i++;
    }

    return zombies;
}