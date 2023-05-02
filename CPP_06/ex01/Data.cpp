#include "Data.hpp"

Data::Data( char const c,int const i,short const s,float const f,long const l,double const d) : _c(c),_i(i),_f(f),_d(d),_s(s),_l(l) {
	return ;
}

Data::~Data(void) {
	return ;
}

char	const &Data::getC(void) const {
	return this->_c;
}

int		const &Data::getI(void) const {
	return this->_i;
}

float	const &Data::getF(void) const {
	return this->_f;
}

double	const &Data::getD(void) const {
	return this->_d;
}

short	const &Data::getS(void) const {
	return this->_s;
}

long	const &Data::getL(void) const {
	return this->_l;
}

void	Data::setC(char const val){
	this->_c = val;
}

void	Data::setI(int const val){
	this->_i = val;
}

void	Data::setF(float const val){
	this->_f = val;
}

void	Data::setD(double const val){
	this->_d = val;
}

void	Data::setS(short const val){
	this->_s = val;
}

void	Data::setL(long const val){
	this->_l = val;
}

Data	&Data::operator=(Data const &rhs){
	this->_c = rhs.getC();
	this->_i = rhs.getI();
	this->_f = rhs.getF();
	this->_d = rhs.getD();
	this->_s = rhs.getS();
	this->_l = rhs.getL();
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Data const &rhs){
	ostream << "Print :" << std::endl;
	ostream << "\tchar :" << rhs.getC() << std::endl;
	ostream << "\tint :" << rhs.getI() << std::endl;
	ostream << "\tfloat :" << rhs.getF() << std::endl;
	ostream << "\tdouble :" << rhs.getD() << std::endl;
	ostream << "\tshort :" << rhs.getS() << std::endl;
	ostream << "\tlong :" << rhs.getL() << std::endl;
	return (ostream);
}
