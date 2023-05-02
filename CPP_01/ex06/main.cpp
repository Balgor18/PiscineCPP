/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:46:26 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/22 12:29:07 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	k2000;

	if (argc != 2){
		std::cout << "Error launch binary" << std::endl;
		return 1;
	}
	k2000.complain(argv[1]);
	return 0;
}
