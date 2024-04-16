/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:17:13 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 18:11:23 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class   Weapon{

private:
    std::string type;

public:
    void    setType(std::string name);
    std::string&  getType(void);
    Weapon(std::string type);
    ~Weapon(void);
};

#endif