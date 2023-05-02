#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {

	private :
		T		*_array;
		size_t	_size;
	public :
		Array(void) :_size(0), _array(new T[0]){}

		Array(size_t size) : _array(new T[size]), _size(size){}

		Array(Array<T> const &cpy) : _array(new T[cpy._size]), _size(cpy._size){
			for (size_t i = 0; i < _size; i++)
				this->_array[i] = cpy._array[i];
		}

		virtual ~Array(void) {
			delete [] this->_array;
		}

		class	RangeExeption: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Index error");
				}
		};

		Array	&operator=(Array<T> const &rhs){
			if (this != &rhs)
			{
				delete [] this->_array;
				this->_array = new T[rhs._size];
				for (size_t i = 0 ; i < rhs._size ; ++i){
					this->_array[i] = rhs._array[i];
				}
			}
			return *this;
		}

		uint	getSize(void) const {
			return this->_size;
		}

		T	&operator[](size_t const idx){
			if (idx >= this->_size)
				throw RangeExeption();
			return this->_array[idx];
		}
};

template <typename T>
std::ostream	&operator<<(std::ostream &ostream, Array<T> &rhs){
	ostream << "Array:" << std::endl;
	for (size_t i = 0 ; i < rhs.getSize() ; ++i){
		ostream << "\t" "_array[" << i << "]: " << rhs[i] << std::endl;
	}
	return ostream;
}

#endif

