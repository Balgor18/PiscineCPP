#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected :
		std::string	type;

	public :
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const & cpy);
		virtual ~AMateria(void);
		std::string const	&getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &tager);

		AMateria	&operator=(AMateria const &rhs);
};
#endif
