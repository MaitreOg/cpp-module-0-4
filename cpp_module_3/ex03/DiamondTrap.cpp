/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:28:27 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 20:10:13 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->name = name;
    this->setHitPoint(FragTrap::getHitPoint());
    this->setEnergyPoint(ScavTrap::getEnergyPoint());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &src)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->setname(src.ClapTrap::getname());
    this->setHitPoint(src.FragTrap::getHitPoint());
    this->setAttackDamage(src.ScavTrap::getAttackDamage());
    this->setEnergyPoint(src.FragTrap::getEnergyPoint());
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    this->setname(src.getname());
    this->setHitPoint(src.getHitPoint());
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoint(src.getEnergyPoint());
}

void DiamondTrap::WhoAmI()
{
    std::cout << "it s " << this->name <<  " and my ClapTrap name is " << this->ClapTrap::getname()  <<std::endl;
}