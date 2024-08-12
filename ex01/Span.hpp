/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:13:41 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 14:54:11 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <array>
#include <deque>
#include <iostream>

class Span {
	private:
		std::deque<int> *nums;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &);
		Span & operator = (const Span &);
		~Span();
		void addNumber();
		int shortestSpan();
		int longestSpan();
		void fillArray();
};