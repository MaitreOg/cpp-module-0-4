/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:21:11 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:34:37 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Brain;

class   Dog :  virtual public Animal 
{
private:
    Brain* brain;
public:
    Dog();
    ~Dog(void);
    Dog(Dog &);
    Dog &operator=(Dog &src);
};

#endif