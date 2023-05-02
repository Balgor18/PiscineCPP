#include "Convert.h"

bool	verif_arg(char const *s){
	if (verif_char(s))
		return (cast_char(s));
	else if (verif_int(s))
		return (cast_int(s));
	else if (verif_double(s))
		return (cast_double(s));
	else if (verif_float(s))
		return (cast_float(s));
	return false;
}

int	main (int argc, char **argv) {
	if (argc == 1) {
		std::cout << "Error argument" << std::endl;
		return EXIT_FAILURE;
	}
	if (!verif_arg(argv[1])) {
		std::cout << "Bad input" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
