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

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "new ideas\n";
}

Brain::~Brain(void)
{
    delete[] this->ideas;
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(Brain &src)
{
    std::cout << "Brain affectation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}
