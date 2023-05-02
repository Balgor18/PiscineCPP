/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:14:14 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/09 07:00:15 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

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

class Brain {
	private :
		std::string	ideas[100];
	public :
		Brain(void);
		Brain(Brain const &cpy);
		virtual ~Brain(void);

		std::string getIdea(int const idx) const;
		Brain	&operator=(Brain const &rhs);
};

std::ostream	&operator<<(std::ostream &ostream, Brain const &rhs);

#endif
