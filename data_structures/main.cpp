#include<iostream>
#include"vector.h"
#include"queue.h"

//using namespace std;

void print(queue<int>& q){
	while(!q.empty()){
		std::cout << q.front() << " ";
		q.pop();
	}
	
	std::cout << "\n";
}

int main(){

	queue<int> q;
	q.push(4);
	q.push(5);
	q.push(3);
	// std::cout << q.front() << " ";
	
	print(q);
	print(q);

	// std::cout << q.front() << " ";


	return 0;
}
