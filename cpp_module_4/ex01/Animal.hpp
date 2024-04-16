/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:20:48 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:34:46 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>



class   Animal
{
private:
    std::string type;
public:
    Animal(const std::string&);
    Animal();
    ~Animal(void);
    Animal(Animal&);
    Animal &operator=(Animal &src);
    void makeSound(void) const;
    std::string getType(void) const;
};

#endif