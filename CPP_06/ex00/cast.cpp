#include "Convert.h"
#include <cerrno>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

bool	cast_char(char const *s) {
	const char		c = *s;
	const int		i = static_cast<int>(*s);
	const float		f = static_cast<float>(*s);
	const double	d = static_cast<double>(*s);

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return true;
}

bool	cast_int(char const *s) {
	long const	l = strtol(s, NULL, 10);

	if (!errno && l >= -2147483648 && l <= 2147483647){
		const int	i = static_cast<int>(l);

		std::cout << "char: ";
		if (i < -128 || i > 127)
			std::cout << "impossible" << std::endl;
		else if (!isprint(static_cast<char>(i)))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		std::cout
		<< "int: " << i << std::endl
		<< std::setprecision(1)
		<< std::fixed
		<< "float: " << static_cast<float>(i) << "f" << std::endl
		<< "double: " << static_cast<double>(i) << std::endl;
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	}
	return true;
}

bool	cast_double(const char *s){
	double	const d = strtod(s, NULL);

	if (!errno) {
		std::cout << "char: ";
		if (round(d) < -128 || round(d) > 127 || isnan(d))
			std::cout << "impossible" << std::endl;
		else if (!isprint(static_cast<char>(round(d))))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(round(d)) << "'" << std::endl;
		std::cout << "int: ";
		if (round(d) < -2147483648 || round(d) > 2147483647 || isnan(d))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(round(d)) << std::endl;
		std::cout << std::setprecision(1) << std::fixed << "float: ";
		if (d && !isinf(d) && (d < FLT_MIN || d > FLT_MAX))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl << std::setprecision(0);
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	}
	return true;
}

bool	cast_float(const char *s){
	float const		f = strtof(s, NULL);

	if (!errno) {
		if (round(f) < -128 || round(f) > 127 || isnanf(f))
			std::cout << "impossible" << std::endl;
		else if (!isprint(static_cast<char>(round(f))))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(round(f)) << "'" << std::endl;
		std::cout << "int: ";
		if (round(f) < -2147483648 || round(f) > 2147483647 || isnanf(f))
			std::cout << "impossible";
		else
			std::cout << static_cast<int>(round(f));
		std::cout  << std::endl << std::setprecision(1) << std::fixed << "float: " << f << "f" << std::endl << "double: " << static_cast<double>(f) << std::endl << std::setprecision(0);
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	}
	return true;
}
