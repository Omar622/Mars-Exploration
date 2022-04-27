
#ifndef QUEUE_H
#define QUEUE_H


template<class t>
class queue{
    struct node{
        t val;
        node* nxt;
        node(); // empty constructor
        node(node*, t); // parametized constructor
    };
    node* fr;
    node* bk;
	int siz;

public:
	queue(); // empty constructor
	queue(queue<t>&); // copy constructor
	~queue();

	void push(t);
	void pop();
	t& front();
	t& back();
	int size();
    bool empty();
	void clear();
};

#include "queue.cpp"

#endif
