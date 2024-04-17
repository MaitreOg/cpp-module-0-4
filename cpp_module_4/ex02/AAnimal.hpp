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

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>



class   AAnimal
{
private:
    std::string type;
public:
    AAnimal(const std::string&);
    AAnimal();
    virtual ~AAnimal(void);
    AAnimal(AAnimal&) = delete;
    AAnimal &operator=(AAnimal &src) = delete;
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif