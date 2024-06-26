/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:20:48 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 18:59:24 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>



class   AAnimal
{
private:
    std::string type;
    AAnimal(AAnimal&);
    AAnimal &operator=(AAnimal &src);
public:
    AAnimal(const std::string&);
    AAnimal();
    virtual ~AAnimal(void);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif