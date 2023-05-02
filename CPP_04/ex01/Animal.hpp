/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:16:46 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:25:51 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
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

class Animal {
	protected :
		std::string type;
	public :
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &cpy);
		virtual ~Animal(void);
	std::string	getType(void) const;
	virtual void	makeSound(void) const ;

	Animal	&operator=(Animal const &rhs);
};

std::ostream	&operator<<(std::ostream &ostream, Animal const &rhs);

#endif
