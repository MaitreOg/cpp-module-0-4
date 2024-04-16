/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:56:23 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 18:03:29 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"



class   FragTrap : public ClapTrap 
{
private:

public:
    FragTrap(const std::string&);
    ~FragTrap(void);
    FragTrap(FragTrap &);
    FragTrap &operator=(FragTrap &src);
    void highFivesGuys(void);

};

#endif