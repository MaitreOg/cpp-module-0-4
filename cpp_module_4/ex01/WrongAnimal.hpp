/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:37:06 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:39:34 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>



class   WrongAnimal
{
private:
    std::string type;
public:
    WrongAnimal(const std::string&);
    WrongAnimal();
    ~WrongAnimal(void);
    WrongAnimal(WrongAnimal&);
    WrongAnimal &operator=(WrongAnimal &src);
    void makeSound(void) const;
    std::string getType(void) const;
};

#endif