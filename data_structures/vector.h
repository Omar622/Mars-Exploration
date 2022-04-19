
#ifndef VECTOR_H
#define VECTOR_H

template<class t>
class vector{
	int* arr;
	int siz, cap;

public:
	vector();
	vector(int);
	vector(int, t);
	vector(vector<t>&);
	~vector();

	void push_back(t);
	void pop_back();
	t back();
	t& operator[](int);
	int size();
	int capacity();
	void clear();
};

#include "vector.cpp"

#endif
