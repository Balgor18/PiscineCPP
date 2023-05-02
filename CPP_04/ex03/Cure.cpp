#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	return ;
}

Cure::Cure(Cure const &cpy) : AMateria(cpy.getType()){
	return ;
}

Cure::~Cure(void){
	return ;
}

Cure	&Cure::operator=(Cure const &rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AMateria	*Cure::clone()const {
	return new Cure();
}

void	Cure::use(ICharacter &cha){
	std::cout << "* heals " << cha.getName() << "’s wounds *" << std::endl;
}
