#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type(NULL){
	return ;
}

AMateria::AMateria(std::string const &string) : type(string){
	return ;
}

AMateria::AMateria(AMateria const &cpy) : type(cpy.type) {
	return ;
}

AMateria::~AMateria(void){
	return ;
}

std::string const	&AMateria::getType(void) const {
	return this->type;
}

void	AMateria::use(ICharacter &target){
	std::cout << "* uses AMateria " << this->type << " to " << target.getName() << " *" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &rhs){
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}
