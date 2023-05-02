#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character :public ICharacter{
	private :
		std::string	_name;
		AMateria	*_inv[4];

	public :
		Character(void);
		Character(std::string name);
		Character(Character const &cpy);
		virtual ~Character(void);

		std::string const & getName() const;

		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		Character	&operator=(Character const &rhs);
};

#endif
