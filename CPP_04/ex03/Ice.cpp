#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	return ;
}

Ice::Ice(Ice const &cpy) : AMateria(cpy.type){
	return ;
}

Ice::~Ice(){
	return ;
}

Ice	&Ice::operator=(Ice const &rhs){
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

AMateria	*Ice::clone(void) const{
	return new Ice();
}

void	Ice::use(ICharacter &cha){
	std::cout << "* shoots an ice bolt at " << cha.getName() << " *" << std::endl;
}
