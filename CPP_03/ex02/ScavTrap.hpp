/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:18:29 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 11:39:26 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &cpy);
		virtual			~ScavTrap(void);
		void			guardGate(void);
		virtual void	attack(std::string const &target);

		ScavTrap		&operator=(ScavTrap const &rhs);

};

std::ostream	&operator<<(std::ostream &ostream, ScavTrap const &scav);

#endif
