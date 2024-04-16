/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:55:45 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 19:48:35 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie*    zombieHorde( int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    int i = -1;

    while (++i < N)
    {
        horde[i].set_name(name);
        horde[i].announce();
    }
    return (horde);
}
