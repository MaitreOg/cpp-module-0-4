/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:15:05 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 01:42:36 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class   Zombie{

private:
    std::string name;

public:
    void announce(void);
    Zombie(std::string name);
    ~Zombie(void);
    
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
#endif