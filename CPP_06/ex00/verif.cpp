#include "Convert.h"

bool	verif_char(char const *c){
	if (!*c || isdigit(*c) || strlen(c) > 1)
		return false;
	return true;
}

bool	verif_int(char const *c){
	if (!*c)
		return false;
	while (isspace(*c))
		++c;
	if (*c == '+' || *c == '-')
		++c;
	while (isdigit(*c))
		++c;
	if (*c)
		return false;
	return true;
}

bool	verif_double(char const *s) {
	if (!*s)
		return false;
	while (isspace(*s))
		++s;
	if (!strcmp(s, "nan"))
		return true;
	if (*s == '+' || *s == '-')
		++s;
	if (!strcmp(s, "inf"))
		return true;
	while (isdigit(*s))
		++s;
	if (*s == '.')
		++s;
	while (isdigit(*s))
		++s;
	if (*s)
		return false;
	return true;
}

bool	verif_float(char const *s){
	while (isspace(*s))
		++s;
	if (!strcmp(s, "nanf"))
		return true;
	if (*s == '+' || *s == '-')
		++s;
	if (!strcmp(s, "inff"))
		return true;
	while (isdigit(*s))
		++s;
	if (*s == '.')
		++s;
	while (isdigit(*s))
		++s;
	if (*s != 'f' || *++s)
		return false;
	return true;
}
