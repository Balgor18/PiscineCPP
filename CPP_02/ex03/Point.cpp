/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:03:44 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 16:31:18 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
	return ;
}

Point::Point(float x, float y) : _x(x), _y(y){
	return ;
}

Point::Point(Point const &cpy) : _x(cpy._x), _y(cpy._y) {
	return ;
}

Point::~Point(void){
	return ;
}

Point	&Point::operator=(Point const &cpy) {
	if (this != &cpy)
	{
		*(Fixed *)&this->_x = cpy._x;
		*(Fixed *)&this->_y = cpy._y;
	}
	return (*this);
}

Fixed	Point::getY(void) const {
	return (this->_y);
}

Fixed	Point::getX(void) const {
	return (this->_x);
}
