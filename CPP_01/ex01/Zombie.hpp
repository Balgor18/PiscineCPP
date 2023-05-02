/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:44 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:08:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public :
	Zombie (std::string str);
	Zombie (void);
	Zombie (Zombie const &cpy);
	~Zombie (void);

	void	announce(void);
	void	setName(std::string name);

private :
	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
