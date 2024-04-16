/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:19:07 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:35:26 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(Dog &src): Animal("Dog")
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
}
Dog &Dog::operator=(Dog &src)
{
    std::cout << "Dog affectation operator called" << std::endl;
    return src;
}