/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:24:30 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:17:43 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class   HumanB{

private:
    Weapon*  weapon;
    std::string name;

public:
    void    attack(void);
    void    setWeapon(Weapon &weapon);
    HumanB(std::string name);
    ~HumanB(void);
};

#endif