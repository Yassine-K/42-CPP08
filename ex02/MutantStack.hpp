#pragma once
#include <iostream>
#include <iterator>
#include <stack>
#include <list>
#include <vector>

template <class T> class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator begin(){ return this->c.begin();}
		iterator end(){ return this->c.end();}
		reverse_iterator rbegin(){ return this->c.rbegin();}
		reverse_iterator rend(){ return this->c.rend();}
};