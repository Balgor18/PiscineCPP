#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_mem[4];

	public :
		MateriaSource(void);
		MateriaSource(MateriaSource const &cpy);
		virtual ~MateriaSource(void);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		MateriaSource	&operator=(MateriaSource const &rhs);
};

#endif
