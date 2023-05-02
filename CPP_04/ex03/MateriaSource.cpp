#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _mem(){
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &cpy) : IMateriaSource(cpy), _mem(){
	int idx;

	for (idx = 0; idx < 4; idx++)
		if (cpy._mem[idx])
			this->_mem[idx] = cpy._mem[idx]->clone();
	return ;
}

MateriaSource::~MateriaSource(void){
	for (int idx = 0; idx < 4; idx++){
		delete this->_mem[idx];
	}
	return ;
}
void	MateriaSource::learnMateria(AMateria *m)
{
	int	idx;

	for (idx = 0 ; idx < 4 && this->_mem[idx] ; ++idx);
	if (idx < 4)
		_mem[idx] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	int	idx;

	for (idx = 0 ; idx < 4 && this->_mem[idx] ; ++idx)
		if (!this->_mem[idx]->getType().compare(type))
			return this->_mem[idx]->clone();
	return NULL;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs) {
	if (this != &rhs) {
		for (int idx = 0 ; idx < 4 ; ++idx) {
			delete this->_mem[idx];
			this->_mem[idx] = NULL;
			if (rhs._mem[idx])
				this->_mem[idx] = rhs._mem[idx]->clone();
		}
	}
	return *this;
}
