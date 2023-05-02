#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <ctime>

Span::Span(const uint s) : _size(0), _max(s), _list(){
	std::srand(std::time(NULL));
	return ;
}

Span::Span(Span const &src) : _size(src._size),_max(src._max),_list(src._list){
	std::srand(std::time(NULL));
	return ;
}

Span::~Span(void) {
	return ;
}

Span	&Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_max = rhs._max;
		this->_size = rhs._size;
	}
	return *this;
}

void	Span::addNumber(int const add) {
	if (this->_size == this->_max){
		throw ErrorAddElement();
	}
	this->_list.push_back(add);
	this->_size++;
}

void	Span::addMultipleNum( size_t rangeSize ) {

	for ( size_t i = 0; i < rangeSize; i++ ) {
		this->addNumber( std::rand() % (rangeSize * 2));
	}
}

uint	Span::longestSpan(void) const{
	if (this->_size < 2)
		throw Span::ErrorSpanException();
	return (*max_element(this->_list.begin(), this->_list.end()) - *min_element(this->_list.begin(), this->_list.end()));
}

uint	Span::shortestSpan(void) const{
	uint							ret(UINT_MAX);
	std::list<int>					tmp(this->_list);
	std::list<int>::const_iterator	iter;
	int								a[2] = {0};

	if (this->_size < 2)
		throw Span::ErrorSpanException();
	tmp.sort();
	iter = tmp.begin();
	while (iter != tmp.end())
	{
		a[0] = *iter;
		if (++iter != tmp.end())
		{
			a[1] = *iter;
			if (static_cast<uint>(a[1] - a[0]) < ret)
				ret = static_cast<uint>(a[1] - a[0]);
		}
	}
	return ret;
}


uint const	&Span::getSize(void) const {
	return this->_size;
}

uint const	&Span::getMax(void) const {
	return this->_max;
}

std::list<int> const	&Span::getList(void) const{
	return this->_list;
}

std::ostream	&operator<<(std::ostream &ostream, Span const &rhs) {
	std::list<int>::const_iterator	iter;

	ostream << "Span" << std::endl;
	ostream << "size: " << rhs.getSize() << std::endl;
	ostream << "maxSize: " << rhs.getMax() << std::endl;
	ostream << "list: ";
	iter = rhs.getList().begin();
	while (iter != rhs.getList().end()) {
		ostream << *iter;
		if (++iter != rhs.getList().end())
			ostream << ", ";
	}
	return ostream;
}
