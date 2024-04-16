/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:34:41 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:18:06 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::string type = this->weapon->getType();
    std::cout << this->name << " attacks with their " << type << std::endl;
}
HumanB::HumanB (std::string name)
{
    this->name = name;
    std::cout << "HumanB " << this->name << " created with no weapon" << std::endl;

}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB ()
{
    std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

