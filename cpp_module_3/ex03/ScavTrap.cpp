/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:01:06 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 22:53:40 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->setname("default");
    this->setHitPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setHitPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
}
ScavTrap::~ScavTrap()
{
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