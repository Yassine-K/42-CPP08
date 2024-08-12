/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:16:23 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 15:13:41 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <iterator>

Span::Span() {
	nums = new std::deque<int>();
}

Span::Span(unsigned int n) {
	nums = new std::deque<int>(n);
}

Span::Span(const Span & cp) {
	nums = new std::deque<int>(cp.nums->size());
}

Span & Span::operator = (const Span & cp) {
	if (this != &cp) {
		delete nums;
		nums = new std::deque<int>(cp.nums->size());
	}
	return *this;
}

Span::~Span() {
	delete nums;
}

void Span::addNumber() {
	
}

int Span::shortestSpan() {
	
}

int Span::longestSpan() {
	
}

void Span::fillArray() {
	
}