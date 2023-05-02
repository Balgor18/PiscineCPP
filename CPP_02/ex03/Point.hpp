/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:59:30 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 15:45:08 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	const Fixed	_x;
	const Fixed	_y;

public :
	Point( void );
	Point(float x, float y);
	Point(Point const & cpy);
	~Point(void);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	Point	&operator=(Point const &rhs);
	float	area(Point p1, Point p2, Point p3);

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
#endif
