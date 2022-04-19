#include<iostream>
#include"vector.h"

//using namespace std;

void print(vector<int>& v){
	std::cout << v.size() << " " << v.capacity() << "\n";
	for(int i = 0; i < v.size(); ++i){
		std::cout << v[i] << " ";
	}
	std::cout << "\n";
}

int main(){

	vector<int> v;
	print(v);
	v.push_back(12);
	print(v);
	v.pop_back();
	print(v);
	v.push_back(24);
	v.push_back(1);
	v.push_back(33);
	v.push_back(3);
	v.push_back(4);
	print(v);
	v.pop_back();
	print(v);
	std::cout << v.back() << "\n";
	v.clear();
	print(v);



	return 0;
}
