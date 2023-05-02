/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:09:28 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/22 12:28:24 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){
	Harl	k2000;

	k2000.complain("INFO");
	k2000.complain("ERROR");
	k2000.complain("DEBUG");
	k2000.complain("WARNING");
	return 0;
}
