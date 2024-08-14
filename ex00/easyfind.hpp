/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:11:40 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/14 09:47:04 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T> int easyfind(T a, int b) {
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), b);
	if(it != a.end())
		return std::distance(a.begin(), it);
	return -1;
}