/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:00:26 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 16:52:35 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap &src)
{
    return (src);
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    name = src.name;
    HitPoint = src.HitPoint;
    AttackDamage = src.AttackDamage;
    EnergyPoint = src.EnergyPoint;
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
    std::cout << "ClapTrap " << this->name << " loose  " << amount << " hit point !" << std::endl;
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

void   ClapTrap::setname(std::string name)
{
    this->name = name;
}
void   ClapTrap::setHitPoint(int HitPoint)
{
    this->HitPoint = HitPoint;
}
void   ClapTrap::setEnergyPoint(int EnergyPoint)
{
    this->EnergyPoint = EnergyPoint;
}
void   ClapTrap::setAttackDamage(int AttackDamage)
{
    this->AttackDamage = AttackDamage;
}

std::string   ClapTrap::getname(void)
{
    return this->name;
}
int   ClapTrap::getHitPoint(void)
{
    return this->HitPoint;
}
int   ClapTrap::getEnergyPoint(void)
{
    return this->EnergyPoint;
}
int   ClapTrap::getAttackDamage(void)
{
    return this->AttackDamage;
}