#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria{
	public :
		Cure(void);
		Cure(Cure const &cpy);
		virtual ~Cure();
		Cure	&operator=(Cure const &rhs);
		AMateria*	clone() const;
		void	use(ICharacter &cha);
};

#endif
