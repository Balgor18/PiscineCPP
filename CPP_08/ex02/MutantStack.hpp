#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	MutantStack<T>(void){
		return ;
	}
	MutantStack<T>(MutantStack<T> const &src) : std::stack<T>(src){
		return ;
	}

	virtual ~MutantStack(void){
		return ;
	}

	typename MutantStack<T>::iterator	begin(void) {
		return this->c.begin();
	}

	typename MutantStack<T>::iterator	end(void) {
		return this->c.end();
	}

	typename MutantStack<T>::const_iterator	begin(void) const {
		return this->c.begin();
	}
	typename MutantStack<T>::const_iterator	end(void) const {
		return this->c.end();
	}

	MutantStack<T>	&operator=(MutantStack<T> const &rhs) {
		return std::stack<T>::operator=(rhs);
	}
};

template <typename T>
std::ostream	&operator<<(std::ostream &ostream, MutantStack<T> const &rhs) {
	MutantStack<int>::const_iterator	ite;

	ostream << "MutantStack:" << std::endl;
	for (ite = rhs.begin(); ite != rhs.end(); ++ite)
		ostream << "\t" << *ite << std::endl;
	return ostream;
}

template <typename T>
std::ostream	&operator<<(std::ostream &ostream, typename MutantStack<T>::iterator const &rhs) {
	ostream << "MutantStack::iterator:" << std::endl << "\t" "*rhs: " << *rhs << std::endl;
	return ostream;
}

template <typename T>
std::ostream	&operator<<(std::ostream &ostream, typename MutantStack<T>::const_iterator const &rhs) {
	ostream << "const_iterator:" << std::endl
	<< "\t" "*rhs: " << *rhs << std::endl;
	return ostream;
}

#endif
