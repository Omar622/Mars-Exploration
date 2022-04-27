#include "queue.h"

template<class t>
queue<t>::node::node():nxt(NULL), val(0){ } // struct: empty constructor

template<class t>
queue<t>::node::node(node* x, t _val):nxt(NULL), val(_val){ } // struct: parameterized constructor


template<class t>
queue<t>::queue():fr(NULL), bk(NULL), siz(0){ } // empty constructor

template<class t>
queue<t>::queue(queue<t>& old):queue(){ // copy constructor
    queue<t> tmp;
    while(!old.empty()){
        push(old.front());
        tmp.push(old.front());
        old.pop();
    }
    while(!tmp.empty()){
        old.push(tmp.front());
        tmp.pop();
    }
}

template<class t>
queue<t>::~queue(){ // destructor
    while(!empty()){
        pop();
    }
    bk = NULL;
}

template<class t>
void queue<t>::push(t _val){
	node* newElement = new node(NULL, _val);

    if(!empty()) bk->nxt = newElement;
    bk = newElement;

    if(empty()) fr = newElement;
    ++siz;
}

template<class t>
void queue<t>::pop(){
	if(!empty()){
        node* tmp = fr;
        fr = fr->nxt;
        delete tmp;
        --siz;
	}else{
		std::cerr << "Trying pop while queue is empty\n";
		exit(0);
	}
}

template<class t>
t& queue<t>::front(){
	if(!empty()){
        return fr->val;
	}else{
		std::cerr << "Trying accessing front while queue is empty\n";
		exit(0);
	}
}

template<class t>
t& queue<t>::back(){
	if(!empty()){
        return bk->val;
	}else{
		std::cerr << "Trying accessing back while queue is empty\n";
		exit(0);
	}
}

template<class t>
int queue<t>::size(){
	return siz;
}

template<class t>
bool queue<t>::empty(){
	return siz == 0;
}

template<class t>
void queue<t>::clear(){
    ~queue();
}
