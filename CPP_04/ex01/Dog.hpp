/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:18:53 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/19 01:35:27 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal{
	public :
		Dog(void);
		Dog(Dog const &cpy);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &rhs);
		virtual void	makeSound(void) const ;
		Brain*	getBrain( void ) const;
	private:
		Brain*	_brain;
};

std::ostream	&operator<<(std::ostream &ostream, Dog const &rhs);

#endif
