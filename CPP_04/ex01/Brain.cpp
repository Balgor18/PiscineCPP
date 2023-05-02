/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:21:02 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:41:45 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain(void) {
	std::cout << GREEN"Constructor " << RESET"Brain called" << std::endl;
	return ;
}

Brain::Brain(Brain const &cpy){
	std::cout << GREEN"Copy constructor " << RESET"brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return ;
}

Brain::~Brain(void) {
	std::cout << RED"Deconstructor " << RESET"Brain called" << std::endl;
	return ;
}

std::string Brain::getIdea(int const index) const {
	return (this->ideas[index]);
}

Brain	&Brain::operator=(Brain const &rhs){
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Brain const &rhs){
	int	i = 0;

	ostream << "Brain:" << std::endl
	<< "ideas: {";
	while (i < 100)
	{
		ostream << rhs.getIdea(i);
		if (++i < 100)
			ostream << ", ";
	}
	ostream << "}" << std::endl;
	return ostream;
}
