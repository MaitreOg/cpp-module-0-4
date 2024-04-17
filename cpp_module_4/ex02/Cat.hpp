/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:21:01 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 22:25:15 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class   Cat :  public Animal 
{
private:
    Brain* brain;
public:
    Cat(const std::string&);
    Cat();
    ~Cat(void);
    Cat(Cat &);
    Cat &operator=(Cat &src);
};

#endif