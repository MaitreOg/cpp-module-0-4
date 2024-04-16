/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:53:10 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:41:06 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : Cat() , Dog()
{
    std::cout << "Brain default constructor called" << std::endl;
    this->tab = new std::string[100];
}
Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    delete[] tab;
}
Brain::Brain(Brain &src): Cat(src) , Dog(src)
{
    std::cout << "Brain copy constructor called" << std::endl;
}
Brain &Brain::operator=(Brain &src)
{
    std::cout << "Brain affectation operator called" << std::endl;
    return src;
}