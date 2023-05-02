/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:30:24 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 17:34:37 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdlib>

static Fixed	area(Point const p1, Point const p2, Point const p3){
	return Fixed::abs(p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY() - p1.getY()) + p3.getX() * (p1.getY() - p2.getY())) / Fixed(2.0f);
}

bool bsp (Point const a, Point const b, Point const c, Point const point) {
	Fixed abc = area(a, b, c);
	Fixed bcp = area(b, c, point);
	Fixed acp = area(a, c, point);
	Fixed abp = area(a, b, point);
	if (Fixed::abs(abc - (bcp + acp + abp)) < 1)
		return true;
	return false;
}
