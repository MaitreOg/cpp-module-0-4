/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:23:44 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 00:09:22 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int check_ab_coord(Point const a, Point const b, Point const x)
{
    int i = (b.getX() - x.getX()) * (a.getY() - x.getY()) - ((b.getY() - x.getY()) * (a.getX() - x.getX()));
    if (i < 0)
        return (1);
    return(0);
}

int check_ac_coord(Point const a, Point const c, Point const x)
{
    int i = (c.getX() - x.getX()) * (a.getY() - x.getY()) - ((c.getY() - x.getY()) * (a.getX() - x.getX()));
    if (i > 0)
        return (1);
    return(0);
}

int check_bc_coord(Point const b, Point const c, Point const x)
{
    int i = (c.getX() - x.getX()) * (b.getY() - x.getY()) - ((c.getY() - x.getY()) * (b.getX() - x.getX()));
    if (i < 0)
        return (1);
    return(0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (check_ab_coord(a, b, point) == 0)
        return false;
    if (check_ac_coord(a, c, point) == 0)
        return false;
    if (check_bc_coord(b, c, point) == 0)
        return false;
    return true;
}