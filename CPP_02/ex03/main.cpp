/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:05 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 17:34:53 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Point	a(0, 0);
	Point	b(1.2, 2.8);
	Point	c(2.8, 0);

	Point	d(1.2, 1.3);
	Point	e(2.6, 1.8);
	Point	f(1.4, -0.5);
	Point	g(-0.7, 1.6);
	if (bsp(a,b,c,d))
		std::cout << "Point d is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point d is " << RED"not inside "<< RESET"the triangle" << std::endl;
	if (bsp(a,b,c,e))
		std::cout << "Point e is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point e is " << RED"not inside "<< RESET"the triangle" << std::endl;
	if (bsp(a,b,c,f))
		std::cout << "Point f is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point f is " << RED"not inside "<< RESET"the triangle" << std::endl;
	if (bsp(a,b,c,g))
		std::cout << "Point g is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point g is " << RED"not inside "<< RESET"the triangle" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	Point	a2(1, 1);
	Point	b2(4, 2);
	Point	c2(2, 7);

	Point	p(1.3, 5);
	Point	p2(1.2, 3);
	if (bsp(a2,b2,c2,p))
		std::cout << "Point p is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point p is " << RED"not inside "<< RESET"the triangle" << std::endl;
	if (bsp(a2,b2,c2,p2))
		std::cout << "Point p2 is " << GREEN"inside "<< RESET"the triangle" << std::endl;
	else
		std::cout << "Point p2 is " << RED"not inside "<< RESET"the triangle" << std::endl;

	return 0;
}
