/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:11:11 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/14 15:23:43 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int main() {
	std::vector<int> a;
	std::list<int> b;
	std::array<int, 10> c;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
		a.push_back(i + 1);
	for (int i = 0; i < 10; i++)
		b.push_back(i + 2);
	for (int i = 0; i < 10; i++)
		c[i] = i + 4;
	for (int i = 0; i < 10; i++)
		d.push_back(i + 3);

	std::cout << ::easyfind(a, 3) << std::endl;
	std::cout << ::easyfind(b, 3) << std::endl;
	std::cout << ::easyfind(c, 11) << std::endl;
	std::cout << ::easyfind(d, 0) << std::endl;
	return 0;
}