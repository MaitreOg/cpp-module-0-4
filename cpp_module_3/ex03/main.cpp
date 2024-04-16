/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:59:41 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 19:14:17 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::string s = "sam";
    DiamondTrap player1(s);
    player1.WhoAmI();
    player1.attack("bob");
    player1.takeDamage(13);

    return (0);
}