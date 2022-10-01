/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:23:27 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/10/01 11:32:01 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public: 
        void setName(std::string name);
        void announce(void) const;
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

# endif