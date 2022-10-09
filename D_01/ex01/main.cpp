/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:23:40 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/10/09 10:06:50 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main ()
{
    Zombie *z = zombieHorde(3 , "foo");
    if (!z)
        return (1);
            
    for (int i = 0; i < 3; i++)
        z[i].announce();

    delete[] z;
}