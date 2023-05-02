/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:02 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:57:22 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
	Fixed(Fixed const & cpy);
	~Fixed(void);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed	& operator=(Fixed const &cpy);
};
#endif
