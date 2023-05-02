/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:00 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/23 10:39:06 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0){
	std::cout << GREEN"Default " << RESET"constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & cpy){
	std::cout << GREEN"Copy " << RESET"constructor called" << std::endl;
	this->_integer = cpy.getRawBits();
	return ;
}

Fixed::~Fixed(void){
	std::cout << RED"Destructor " << RESET"called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void Fixed::setRawBits( int const raw ){
	this->_integer = raw;
}

Fixed	&Fixed::operator=(Fixed const &cpy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cpy)
		this->_integer = cpy.getRawBits();
	this->_integer = cpy._integer;
	return (*this);
}
