#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>
# include <cstring>
# include <cstdlib>

bool	verif_int(char const *c);
bool	verif_double(char const *s);
bool	verif_char(char const *c);
bool	verif_float(char const *s);

bool	cast_char(char const *s);
bool	cast_int(char const *s);
bool	cast_double(const char *s);
bool	cast_float(const char *s);

#endif
