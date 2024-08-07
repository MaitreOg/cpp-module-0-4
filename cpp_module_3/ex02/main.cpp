/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:59:41 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:04:48 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::string s = "sam";
    FragTrap player1(s);
    FragTrap player2("frank");
    player1.highFivesGuys();
    player1.attack("frank");
    player2.takeDamage(30);

    return (0);
}