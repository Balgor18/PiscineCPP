#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U>

void	iter(T *tab, size_t const len, U f(T &)) {
	for (size_t	i = 0; i < len; i++){
		f(tab[i]);
	}
}
#endif
