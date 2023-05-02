/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:20:50 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:17:42 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat(void);
		Cat(Cat const &cpy);
		virtual ~Cat(void);
		Cat	&operator=(Cat const &rhs);
	private :
		void	makeSound(void) const ;
};

std::ostream	&operator<<(std::ostream &ostream, Cat const &rhs);

#endif
