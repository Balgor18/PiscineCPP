/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:49:45 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 11:52:01 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

protected :
	std::string	_name;

public :
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &cpy);
	virtual ~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap const &rhs);
	void	whoAmI();
};

std::ostream	&operator<<(std::ostream &ostream, DiamondTrap const &cpy);

#endif
