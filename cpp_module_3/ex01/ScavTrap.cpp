/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:01:06 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:59:43 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setHitPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
        std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &src)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->setname(src.getname());
    this->setHitPoint(src.getHitPoint());
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoint(src.getEnergyPoint());
    return *this;
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->setname(src.getname());
    this->setHitPoint(src.getHitPoint());
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoint(src.getEnergyPoint());
}

void ScavTrap::guardGate()
{
    std::cout << this->getname() << " is now in gate keeper mode" << std::endl;
    
}