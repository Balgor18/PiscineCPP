/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:02 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 17:16:35 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# define BLACK "\033[0;30m"
# define BLUE "\033[0;34m"
# define CYAN "\033[0;36m"
# define GREEN "\033[0;32m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define WHITE "\033[0;37m"
# define YELLOW "\033[0;33m"
# define RESET "\e[0m"

class Fixed {

private :
	int					_integer;
	static const int	_rawBits = 8;

public :
	Fixed(void);
	Fixed(int const i);
	Fixed(float const i);
	Fixed(Fixed const & cpy);
	~Fixed(void);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed		&max(Fixed &first, Fixed &second);
	static Fixed		&min(Fixed &first, Fixed &second);
	static Fixed const	&max(Fixed const &first, Fixed const &second);
	static Fixed const	&min(Fixed const &first, Fixed const &second);

	// Operators
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	&operator=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	static Fixed	abs(Fixed const &s);
};

std::ostream & operator<<(std::ostream &o, Fixed const &fix);

#endif
