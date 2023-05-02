/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:25:43 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:01:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

class ClapTrap {

private :
	std::string	_name;
	int					_hit;// HP | PV
	int					_energy;// PM
	int					_attack;// AD
public :

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &cpy);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap	&operator=(ClapTrap const &rhs);
};


#endif
