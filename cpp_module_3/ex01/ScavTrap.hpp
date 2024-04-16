/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:01:19 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:59:30 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"



class   ScavTrap : public ClapTrap 
{
private:

public:
    ScavTrap(const std::string&);
    ~ScavTrap(void);
    ScavTrap(ScavTrap &);
    ScavTrap &operator=(ScavTrap &src);
    void guardGate();

};

#endif