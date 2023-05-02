/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:13:58 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/04 05:12:59 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
# include <iostream>

class Intern {
	private:
		Form*	_Form[3];
	public:
		Intern(void);
		Intern( Intern const & src );
		~Intern(void);
		Intern &	operator=( Intern const & rhs );
		Form*	makeForm( std::string name, std::string target );
		class InvalidNameException: public std::exception {
			public:
				virtual const char *	what() const throw() {
					return "404 Form not found";
				}
		};
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif
