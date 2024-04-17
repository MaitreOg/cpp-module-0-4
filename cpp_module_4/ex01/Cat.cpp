/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:19:17 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:33:41 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}
Cat::~Cat(void)
{
    delete (this->brain);
    std::cout << "Cat destructor called" << std::endl;    
}
Cat::Cat(Cat &src): Animal("Cat")
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*src.brain);
}
Cat &Cat::operator=(Cat &src)
{
    std::cout << "Cat affectation operator called" << std::endl;
    if (this->brain)
        delete (this->brain);
    this->brain = new Brain(*src.brain);
    return *this;
}
