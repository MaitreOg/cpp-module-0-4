/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:24:11 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 23:43:17 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class   HumanA{

private:
    Weapon&  weapon;
    std::string name;

public:
    
    void    attack(void);
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);
};

#endif