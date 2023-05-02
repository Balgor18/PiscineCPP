/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:20:50 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/19 01:32:21 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public :
		Cat(void);
		Cat(Cat const &cpy);
		virtual ~Cat(void);
		Cat	&operator=(Cat const &rhs);
		virtual void	makeSound(void) const ;
		Brain*	getBrain( void ) const;
	private :
		Brain*		_brain;
};

std::ostream	&operator<<(std::ostream &ostream, Cat const &rhs);

#endif
