#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class ErrorNotFound : public std::exception{
	public:
		virtual char const	*what(void) const throw()
		{
			return "Value not found";
		}
};

template<typename T>
typename T::const_iterator easyfind(T const &list, int const nb){
	typename T::const_iterator	i;

	i = find(list.begin(), list.end(), nb);
	if (i != list.end())
		return i;
	throw ErrorNotFound();
};

#endif
