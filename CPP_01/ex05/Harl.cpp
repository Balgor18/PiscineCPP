/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:35:08 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/21 14:58:00 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void) {
	std::cout << GREEN"Constructor" << RESET << " called" << std::endl;
}

Harl::~Harl (void) {
	std::cout << RED"Constructor" << RESET << " called" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int		get_nb_level(std::string lvl){
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					levelNumber = 4;

	for (int i = 0; i < 4 && levelNumber == 4; i++)
		if (lvl == levels[i])
			levelNumber = i;
	return (levelNumber);
}

void	Harl::complain(std::string level){
	fct_ptr	fct_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	if (get_nb_level(level) < 4)
		(this->*(fct_ptr[get_nb_level(level)]))();
	else
		std::cout << "[INVALID]" << std::endl << "Bad level." << std::endl << std::endl;
}
