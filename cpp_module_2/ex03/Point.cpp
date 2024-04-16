/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:23:20 by smarty            #+#    #+#             */
/*   Updated: 2024/04/12 21:04:59 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0)
{

}
Point::Point(const float x, const float y) : x(x), y(y)
{

}
Point::Point(const Point &src) : x(src.x), y(src.y)
{
}
Point &Point::operator=(Point &src)
{
	return src;
}


int  Point::getX(void) const
{
	return this->x.getRawBits();
}
int	Point::getY(void) const
{
	return this->y.getRawBits();
}

void	Point::print_coord(void)
{
	std::cout << "x = " << this->x << "\ty = " << this->y << std::endl;
}

Point::~Point(void)
{

}