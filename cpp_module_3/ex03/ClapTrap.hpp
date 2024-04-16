/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:00:02 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 16:47:13 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap{

private:
    std::string name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;

public:
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(ClapTrap &src);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void   setname(std::string name);
    void   setHitPoint(int HitPoint);
    void   setEnergyPoint(int EnergyPoint);
    void   setAttackDamage(int AttackDamage);
    std::string   getname(void);
    int   getHitPoint(void);
    int   getEnergyPoint(void);
    int   getAttackDamage(void);
};

#endif