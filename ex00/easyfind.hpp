/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:11:40 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 13:11:35 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T> int easyfind(T a, int b) {
	int ind = 0;
	for (typename T::iterator i = a.begin(); i != a.end(); i++, ind++)
		if (*i == b)
			return ind;
	return -3;
}