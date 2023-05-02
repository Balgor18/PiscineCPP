/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:16:46 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:46:49 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal {
	protected :
		std::string type;
	public :
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void) = 0;
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
		AAnimal	&operator=(AAnimal const &rhs);
};

std::ostream	&operator<<(std::ostream &ostream, AAnimal const &rhs);

#endif
