/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:56:35 by smarty            #+#    #+#             */
/*   Updated: 2024/04/11 19:24:04 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "default constructor called" << std::endl;
    this->nb = 0;
}
Fixed::Fixed(const float f)
{
    std::cout << "float constructor called" << std::endl;
    this->nb = roundf(f * (1 << bit_fract));
}

Fixed::Fixed(const int i)
{
    std::cout << "int constructor called" << std::endl;
    this->nb = i * (1 << bit_fract);
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(op.getRawBits());
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
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

int Fixed::toInt( void ) const
{
    return this->nb / (1 << bit_fract);
}
float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->nb) / (1 << bit_fract);
}
Fixed::~Fixed(void)
{
    std::cout << "destructor called" << std::endl;
}