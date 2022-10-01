/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:55:47 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/09/21 10:23:16 by yed-dyb          ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

# endif