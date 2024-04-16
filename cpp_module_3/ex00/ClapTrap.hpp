/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:16:16 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:41:45 by smarty           ###   ########.fr       */
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
    ClapTrap &operator=(const ClapTrap &src);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif