/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:54:01 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 19:46:54 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "name";
}
void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...." << std::endl;
}

Zombie::~Zombie (void)
{
    std::cout << this->name << " is dead" << std::endl;
}