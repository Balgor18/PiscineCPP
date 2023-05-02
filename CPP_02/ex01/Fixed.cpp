/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:00 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/23 12:03:19 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0){
	std::cout << GREEN"Default " << RESET"constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i) : _integer(i << _rawBits){
	std::cout << "Int " << GREEN"constructor"<< RESET" called" << std::endl;
	return ;
}

Fixed::Fixed(float const i) : _integer((int)roundf(i * (1 << _rawBits))){
	std::cout << "Float " << GREEN"constructor"<< RESET" called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & cpy){
	std::cout << "Copy " << GREEN"constructor" << RESET" called" << std::endl;
	*this = cpy;
	return ;
}

Fixed::~Fixed(void){
	std::cout << RED"Destructor " << RESET"called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
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

std::ostream &operator<<(std::ostream &o, Fixed const &fix) {
	o << fix.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_integer / (1 << _rawBits));
}

int		Fixed::toInt(void) const {
	return (this->_integer >> _rawBits);
}