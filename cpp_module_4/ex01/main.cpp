/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:19:21 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:24:23 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;

    return 0;
}