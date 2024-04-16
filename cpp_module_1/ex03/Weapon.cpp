/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:32:09 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:15:04 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string name)
{
    this->type = name;
}
std::string&  Weapon::getType(void)
{
    return (this->type);
}
Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}
Weapon::~Weapon (void)
{
}