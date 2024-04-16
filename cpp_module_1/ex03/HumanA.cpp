/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:34:14 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:13:48 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void    HumanA::attack(void)
{
    std::string type = this->weapon.getType();
    std::cout << this->name << " attacks with their " << type << std::endl;
}
HumanA::HumanA (std::string name, Weapon& weapon) : weapon(weapon)
{
    this->weapon = weapon;
    this->name = name;
    std::cout << "HumanA " << this->name << " created with" << this->weapon.getType() << std::endl;
}

HumanA::~HumanA ()
{
    std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}
