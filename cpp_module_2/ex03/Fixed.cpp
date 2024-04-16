/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:22:57 by smarty            #+#    #+#             */
/*   Updated: 2024/04/12 18:13:51 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->nb = 0;
}
Fixed::Fixed(const float f)
{
    this->nb = roundf(f * (1 << bit_fract));
}

Fixed::Fixed(const int i)
{
    this->nb = i * (1 << bit_fract);
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    setRawBits(op.getRawBits());
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &b)
{
    if (this->nb > b.nb)
        return 1;
    else
        return 0;
}

bool Fixed::operator<(const Fixed &b)
{
    if (this->nb < b.nb)
        return 1;
    else
        return 0;
}

bool Fixed::operator>=(const Fixed &b)
{
    if (this->nb >= b.nb)
        return 1;
    else
        return 0;
}

bool Fixed::operator<=(const Fixed &b)
{
    if (this->nb <= b.nb)
        return 1;
    else
        return 0;
}

bool Fixed::operator==(const Fixed &b)
{
    if (this->nb == b.nb)
        return 1;
    else
        return 0;
}

bool Fixed::operator!=(const Fixed &b)
{
    if (this->nb == b.nb)
        return 0;
    else
        return 1;
}

Fixed Fixed::operator+(const Fixed &b)
{
    Fixed result;
    result.nb = this->nb + b.nb;
    return result;
}

Fixed Fixed::operator-(const Fixed &b)
{
    Fixed result;
    result.nb = this->nb - b.nb ;
    return result;
}

Fixed Fixed::operator*(const Fixed &b)
{
    Fixed result;
    result.nb = (static_cast<long long>(this->nb) * b.nb) >> bit_fract;
    return result;
}

Fixed Fixed::operator/(const Fixed &b)
{
    Fixed result;
    result.nb = (static_cast<long long>(this->nb) * (1 << bit_fract) / b.nb);
    return result;
}

Fixed& Fixed::operator++(void)
{
    this->nb++;
    return *this; 
}
Fixed Fixed::operator++(int a)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    this->nb--;
    return *this; 
}

Fixed Fixed::operator--(int a)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::min(const Fixed &b)
{
    if (this->nb < b.nb)
        return *this;
    return b;
}
Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.nb < b.nb)
        return a;
    return b;
}
Fixed Fixed::max(const Fixed &b)
{
    if (this->nb > b.nb)
        return *this;
    return b;
}
Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.nb > b.nb)
        return a;
    return b;
}


int Fixed::getRawBits( void ) const
{
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
}

