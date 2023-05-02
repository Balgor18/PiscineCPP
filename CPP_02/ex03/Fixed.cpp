/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:00 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 17:06:56 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0){
	// std::cout << GREEN"Default " << RESET"constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i) : _integer(i << _rawBits){
	// std::cout << "Int " << GREEN"constructor"<< RESET" called" << std::endl;
	return ;
}

Fixed::Fixed(float const i) : _integer((int)roundf(i * (1 << _rawBits))){
	// std::cout << "Float " << GREEN"constructor"<< RESET" called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & cpy){
	// std::cout << "Copy " << GREEN"constructor" << RESET" called" << std::endl;
	*this = cpy;
	return ;
}

Fixed::~Fixed(void){
	// std::cout << RED"Destructor " << RESET"called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	return (this->_integer);
}

void Fixed::setRawBits( int const raw ){
	this->_integer = raw;
}

Fixed	&Fixed::operator=(Fixed const &cpy) {
	// std::cout << "Copy assignment operator called" << std::endl;
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

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return first;
	return second;
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return first;
	return second;
}

Fixed const	&Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first > second)
		return first;
	return second;
}

Fixed const	&Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first < second)
		return first;
	return second;
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return this->_integer > rhs._integer;
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return this->_integer < rhs._integer;
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return this->_integer >= rhs._integer;
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return this->_integer <= rhs._integer;
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return this->_integer == rhs._integer;
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return this->_integer != rhs._integer;
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	new_fixed(*this);

	++this->_integer;
	return new_fixed;
}

Fixed	Fixed::operator--(int)
{
	Fixed	new_fixed(*this);

	--this->_integer;
	return new_fixed;
}

Fixed	&Fixed::operator++(void)
{
	++this->_integer;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	--this->_integer;
	return *this;
}

Fixed	Fixed::abs(Fixed const &s)
{
	if (s.toFloat() < 0)
		return Fixed(-1.0f * s.toFloat());
	return Fixed(1.0f * s.toFloat());
}
