#include "Data.hpp"
#include <stdint.h>
#include <iostream>

Data	*deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

uintptr_t	serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}


int	main(void)
{
	Data		d('a',42,21,-42,0,0);
	uintptr_t	iptr;
	Data		*addr;

	std::cout << d << std::endl;

	iptr = serialize(&d);
	addr = deserialize(iptr);

	std::cout << "iptr: " << iptr << std::endl;
	std::cout << "addr: " << addr << std::endl;
	std::cout << "  &d: " << &d << std::endl;

	return 0;
}
