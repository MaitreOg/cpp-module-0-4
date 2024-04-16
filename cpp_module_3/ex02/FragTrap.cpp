/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:56:32 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 18:04:30 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
        std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "name = " << this->getname() << std::endl;
    std::cout << "vie = " << this->getHitPoint() << std::endl;
    std::cout << "energy = " << this->getEnergyPoint() << std::endl;
    std::cout << "attack = " << this->getAttackDamage() << std::endl;
    std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap &src)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->setname(src.getname());
    this->setHitPoint(src.getHitPoint());
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoint(src.getEnergyPoint());
    return *this;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->setname(src.getname());
    this->setHitPoint(src.getHitPoint());
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoint(src.getEnergyPoint());
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "let's go, do a high fives guys!!" << std::endl;
    
}