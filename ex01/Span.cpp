/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:16:23 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/14 11:04:57 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
}

Span::Span(unsigned int n) {
	nums = new std::deque<int>(0);
	lim = n;
}

Span::Span(const Span & cp) {
	nums = new std::deque<int>();
	lim = cp.lim;
		for (std::deque<int>::iterator i = cp.nums->begin(); i != cp.nums->end(); ++i) {
			nums->push_back(*i);
		}
}

Span & Span::operator = (const Span & cp) {
	if (this != &cp) {
		nums = new std::deque<int>();
		lim = cp.lim;
		for (std::deque<int>::iterator i = cp.nums->begin(); i != cp.nums->end(); ++i) {
			nums->push_back(*i);
		}
	}
	return *this;
}

Span::~Span() {
	delete nums;
}

void Span::addNumber(int n) {
	if (std::distance(nums->begin(), nums->end()) >= lim)
		throw(std::invalid_argument("Full storage!"));
	nums->push_back(n);
}

void Span::fillSpan(int *n, int len) {
	for (int i = 0; i < len; i++) {
		addNumber(n[i]);
	}
}

int Span::shortestSpan() const{
	static int res = INT_MAX;
	if (std::distance(nums->begin(), nums->end()) < 2)
		throw(std::invalid_argument("Not enough data!"));
	std::sort(nums->begin(), nums->end());
	for (std::deque<int>::iterator it = nums->begin(); it != nums->end(); ++it)	
		res = std::min(res, it + 1 != nums->end() ? std::abs(*it - *(it + 1)) : res);
	return res;
}

int Span::longestSpan() const {
	static int res = -1;
	if (std::distance(nums->begin(), nums->end()) < 2)
		throw(std::invalid_argument("Not enough data!"));
	std::sort(nums->begin(), nums->end());
	for (std::deque<int>::iterator it = nums->begin(); it != nums->end(); ++it)	
		res = std::max(res, it + 1 != nums->end() ? std::abs(*it - *(it + 1)) : res);
	return res;
}