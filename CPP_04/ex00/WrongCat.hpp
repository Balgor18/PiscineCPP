/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:41:10 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:22:27 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
	WrongCat(void);
	WrongCat(WrongCat const &cpy);
	virtual ~WrongCat(void);
	void	makeSound(void) const;
	WrongCat	&operator=(WrongCat const &rhs);
};
std::ostream	&operator<<(std::ostream &ostream, WrongCat const &rhs);

#endif
