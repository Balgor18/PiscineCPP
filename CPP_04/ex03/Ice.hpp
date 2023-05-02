#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria{
	public :
		Ice(void);
		Ice(Ice const &cpy);
		virtual ~Ice();
		Ice	&operator=(Ice const &rhs);
		AMateria*	clone() const;
		void	use(ICharacter &cha);
};

#endif
