/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:13:41 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/14 11:03:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <iostream>
#include <algorithm>
#include <cmath>

class Span {
	private:
		std::deque<int> *nums;
		unsigned int lim;
		Span();

	public:
		Span(unsigned int n);
		Span(const Span &);
		Span & operator = (const Span &);
		~Span();
		void addNumber(int n);
		void fillSpan(int *n, int len);
		int shortestSpan() const;
		int longestSpan() const;
};