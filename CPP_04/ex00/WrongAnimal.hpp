/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:32:59 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/09 07:00:09 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# define BLACK "\033[0;30m"
# define BLUE "\033[0;34m"
# define CYAN "\033[0;36m"
# define GREEN "\033[0;32m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define WHITE "\033[0;37m"
# define YELLOW "\033[0;33m"
# define RESET "\e[0m"

class WrongAnimal {
	protected :
		std::string	type;
	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &cpy);
		virtual ~WrongAnimal(void);
		std::string getType(void) const;
		virtual void	makeSound(void) const;
		WrongAnimal	&operator=(WrongAnimal const &rhs);
};
std::ostream	&operator<<(std::ostream &ostream, WrongAnimal const &rhs);

#endif
