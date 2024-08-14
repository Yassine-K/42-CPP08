#pragma once
#include <iostream>
#include <iterator>
#include <stack>
#include <list>
#include <vector>

template <class T> class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){ return this->c.begin();}
		iterator end(){ return this->c.end();}
};