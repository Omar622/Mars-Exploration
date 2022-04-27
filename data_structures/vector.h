
#ifndef VECTOR_H
#define VECTOR_H

template<class t>
class vector{
	t* arr;
	int siz, cap;

public:
	vector(); // empty constructor
	vector(int); // paramterized constructor
	vector(int, t); // paramterized constructor
	vector(vector<t>&); // copy constructor
	~vector();

	void push_back(t);
	void pop_back();
	t& back();
	t& operator[](int);
	int size();
	int capacity();
	bool empty();
	void clear();
};

#include "vector.cpp"

#endif
