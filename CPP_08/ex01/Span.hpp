#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
#include <cstdlib>
class Span {
	private :
		uint			_size;
		uint			_max;
		std::list<int>	_list;

	class ErrorAddElement : public std::exception {
		private :
			virtual char const	*what(void) const throw() {
				return "Error adding new elem";
			};
	};

	class ErrorSpanException : public std::exception {
		private :
			virtual char const	*what() const throw() {
				return "too few integers stored in Span";
			}
	};
	public :
		Span(const uint s = 0);
		Span(const Span &src);
		virtual ~Span(void);

		uint const	&getSize(void) const;
		uint const	&getMax(void) const;
		std::list<int> const	&getList(void) const;

		void	addNumber(int const add);
		void	addMultipleNum( size_t rangeSize );
		uint	longestSpan(void) const;
		uint	shortestSpan(void) const;

		Span	&operator=(Span const &rhs);

};

std::ostream	&operator<<(std::ostream &ostream, Span const &rhs);

#endif
