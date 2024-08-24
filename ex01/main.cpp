/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:13:00 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/24 09:28:45 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		// int a[40]={-2, -1, -6, -5, -5};
		// Span sp = Span(5);
		// sp.fillSpan(a, 9);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(1);
		// sp.addNumber(9);
		// // sp.addNumber(11);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}