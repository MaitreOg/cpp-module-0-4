/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:21:01 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:46:31 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Brain;

class   Cat :  virtual public Animal 
{
private:
    Brain* brain;
public:
    Cat();
    ~Cat(void);
    Cat(Cat &);
    Cat &operator=(Cat &src);
};

#endif