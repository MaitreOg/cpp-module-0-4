/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:22:54 by smarty            #+#    #+#             */
/*   Updated: 2024/04/12 21:05:13 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <iostream>
#include "Fixed.hpp"


class   Point{

private:
    Fixed const x;
    Fixed const y;

public:
    Point(void);
    Point(const float x, const float y);
    ~Point(void);
    Point(const Point &);
    Point &operator=(Point &);
    void    print_coord(void);
    int   getX(void) const;
    int   getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif