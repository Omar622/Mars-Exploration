#include "vector.h"

template<class t>
vector<t>::vector(){ // empty constructor
	siz = cap = 0;
}

template<class t>
vector<t>::vector(int n){  // paramterized constructor
	arr = new t[n];
	siz = cap = n;
}

template<class t>
vector<t>::vector(int n, t val):vector(n){ // paramterized constructor
	for(int i = 0; i < n; ++i)
		arr[i] = val;
}

template<class t>
vector<t>::vector(vector<t>& old):vector(old.size()){
	for(int i = 0; i < old.size(); ++i){
		arr[i] = old[i];
	}
}

template<class t>
vector<t>::~vector(){
	delete[] arr;
	siz = cap = 0;
}

template<class t>
void vector<t>::push_back(t val){
	if(cap == 0){
		arr = new t[1];
		siz = cap = 1;
		arr[0] = val;
	}else if(siz == cap){
		t* temp = new t[2*cap];
		for(int i = 0; i < siz; ++i){
			temp[i] = arr[i];
		}
		temp[siz] = val;
		delete [] arr;
		arr = temp;
		++siz;
		cap *= 2;
	}else{
		arr[siz++] = val;
	}
}

template<class t>
void vector<t>::pop_back(){
	if(siz){
		--siz;
	}else{
		std::cerr << "Trying pop_back while vector is empty\n";
		exit(0);
	}
}

template<class t>
t& vector<t>::operator[](int idx){
	if(idx < siz){
		return arr[idx];
	}else{
		std::cerr << "Trying accessing negative index in vector\n";
		exit(0);
	}
}

template<class t>
t& vector<t>::back(){
	if(siz){
		return arr[siz-1];
	}else{
		std::cerr << "Trying accessing back while vector is empty\n";
		exit(0);
	}
}

template<class t>
int vector<t>::size(){
	return siz;
}


template<class t>
int vector<t>::capacity(){
	return cap;
}

template<class t>
bool vector<t>::empty(){
	return siz == 0;
}


template<class t>
void vector<t>::clear(){
	siz = 0;
}

