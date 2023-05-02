#include "Character.hpp"

Character::Character(void) : _name("Default"), _inv(){
	return ;
}

Character::Character(std::string name) : _name(name), _inv(){
	return ;
}

Character::Character(Character const &cpy){
	*this = cpy;
	return ;
}

Character::~Character(void){
	for (int idx = 0; idx < 4; idx++){
		delete this->_inv[idx];
	}
	return ;
}

std::string	const &Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m){
	int idx;

	for (idx = 0; idx < 4 && this->_inv[idx]; idx++);
	if (idx < 4 )
		this->_inv[idx] = m;
}

void	Character::unequip(int const idx) {
	if (idx >=0 && idx <= 3)
		this->_inv[idx] = NULL;
}

void	Character::use(int const idx, ICharacter &target) {
	if (this->_inv[idx])
	{
		std::cout << "Character " << this->_name << ": ";
		this->_inv[idx]->use(target);
	}
}

Character	&Character::operator=(Character const &rhs)
{
	int	idx = 0;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		for ( ; idx < 4 ; ++idx)
		{
			delete this->_inv[idx];
			this->_inv[idx] = NULL;
			if (rhs._inv[idx])
				this->_inv[idx] = rhs._inv[idx]->clone();
		}
	}
	return *this;
}
