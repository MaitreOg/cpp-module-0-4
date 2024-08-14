/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:14:50 by smarty            #+#    #+#             */
/*   Updated: 2024/08/14 17:54:42 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name1;
    std::string name2;
    Zombie*     Zombie_heap;
 
    std::cout << "zombie 1 name: ";
    std::getline(std::cin, name1);
    std::cout << "zombie 2 name: ";
    std::getline(std::cin, name2);
    Zombie_heap = newZombie(name1);
    Zombie_heap->announce();
    randomChump(name2);
    delete Zombie_heap;
}