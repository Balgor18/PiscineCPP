/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:18:53 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:27:01 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	public :
		Dog(void);
		Dog(Dog const &cpy);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &rhs);

	private :
		void	makeSound(void) const ;
};

std::ostream	&operator<<(std::ostream &ostream, Dog const &rhs);

#endif
