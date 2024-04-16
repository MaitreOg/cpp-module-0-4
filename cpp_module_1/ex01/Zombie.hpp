/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:54:12 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 19:47:56 by smarty           ###   ########.fr       */
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
    void    set_name(std::string name);
    void    announce(void);
    Zombie(void);
    ~Zombie(void);
};

Zombie*    zombieHorde( int N, std::string name );

#endif