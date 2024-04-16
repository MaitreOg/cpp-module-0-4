/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:53:52 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:38:16 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"



class   Brain :  public Cat, public Dog 
{
private:
    std::string *tab;
public:
    Brain(Brain &);
    Brain();
    ~Brain(void);
    Brain &operator=(Brain &src);
};

#endif