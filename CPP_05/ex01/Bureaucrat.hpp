/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:13:14 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:41:13 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;
class Bureaucrat {
	protected:
		const std::string _name;
		int	_grade;

	public :
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);

		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);
		std::string	getName(void) const;
		int			getGrade(void)const;
		void		upgrade();
		void		downgrade();
		void		signForm(Form &form);

		class	GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too hight");
				}
		};
		class	GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low");
				}
		};
		class	FormALreadySign: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Error sign signed");
				}
		};
		class	ErrorGrade: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Error creation with grade");
				}
		};
};

std::ostream &operator<<(std::ostream &ostream, Bureaucrat const &ref);

#endif
