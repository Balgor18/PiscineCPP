/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:31:02 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 11:49:04 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &cpy);
	virtual		~FragTrap(void);

	void		highFivesGuys(void) const;
	FragTrap		&operator=(FragTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &ostream, FragTrap const &scav);


#endif
