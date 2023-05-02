#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data {
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		short	_s;
		long	_l;

	public:
		Data( char const c,int const i, short const s,float const f,long const l,double const d);

		Data(Data const &s);
		virtual ~Data(void);

		char const	&getC(void) const;
		int const	&getI(void) const;
		float const	&getF(void) const;
		double const &getD(void) const;
		short const	&getS(void) const;
		long const &getL(void) const;

		void	setC(char const 	val);
		void	setI(int const 		val);
		void	setF(float const 	val);
		void	setD(double const 	val);
		void	setS(short const 	val);
		void	setL(long const 	val);
		Data	&operator=(Data const &rhs);
};

std::ostream	&operator<<(std::ostream &ostream, Data const &rhs);

#endif
