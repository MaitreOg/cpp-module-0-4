/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:16:23 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:48:33 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor called" << std::endl;
    this->name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->HitPoint = src.HitPoint;
    this->AttackDamage = src.AttackDamage;
    this->EnergyPoint = src.EnergyPoint;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    this->name = src.name;
    this->HitPoint = src.HitPoint;
    this->AttackDamage = src.AttackDamage;
    this->EnergyPoint = src.EnergyPoint;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " point of damage !" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " repaired " << amount << " hit point !" << std::endl;
        this->HitPoint += amount;
        this->EnergyPoint--;
    }
}