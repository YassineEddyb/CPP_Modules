/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:23:40 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/10/04 15:53:00 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main ()
{
    Zombie *z = zombieHorde(-1 , "foo");
    if (!z)
        return (1);
            
    for (int i = 0; i < 1; i++)
        z[i].announce();

    delete[] z;
}