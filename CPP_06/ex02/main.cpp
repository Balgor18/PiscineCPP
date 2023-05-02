#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class A :public Base{};
class B :public Base{};
class C :public Base{};

Base *generate(void) {
	srand(time(NULL));
	switch (rand() % 3) {
		case 0 :
			return new A;
			break;
		case 1 :
			return new B;
			break;
		case 2 :
			return new C;
			break ;
	}
	return NULL;
}

void	identify(Base* p) {
	A *testA;
	B *testB;
	C *testC;

	testA = dynamic_cast<A*>(p);
	if (testA != NULL)
		std::cout << "A" << std::endl;
	testB = dynamic_cast<B*>(p);
	if (testB != NULL)
		std::cout << "B" << std::endl;
	testC = dynamic_cast<C*>(p);
	if (testC != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p){
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "I'm A"<< std::endl;
	}catch (std::exception const &e){
		std::cout << e.what()<< "I'm not A"<< std::endl;
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "I'm B"<< std::endl;
	}catch (std::exception const &e){
		std::cout << e.what()<< "I'm not B"<< std::endl;
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "I'm C"<< std::endl;
	}catch (std::exception const &e){
		std::cout << e.what()<< "I'm not C"<<std::endl;
	}
}

int	main(void){
	Base	*p = generate();

	std::cout << "Using identify(Base *):" << std::endl;
	identify(p);
	std::cout << "Using identify(Base &):" << std::endl;
	identify(*p);
	delete p;

	return 0;
}
