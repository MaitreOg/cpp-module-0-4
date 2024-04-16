/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:53:07 by smarty            #+#    #+#             */
/*   Updated: 2024/04/10 23:05:18 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &assi)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(assi.getRawBits());
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->nb);
}

void Fixed::setRawBits( int const raw )
{
    this->nb = raw;
}

Fixed::~Fixed(void)
{
    std::cout << "destructor called" << std::endl;
}
