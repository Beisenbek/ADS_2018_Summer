#include <iostream>

using namespace std;


int a[100001];
int len = 0;
int first = 1;
int last = 0;

int size(){
	return len;
}

int push(int x){
	len++;
	last++;
	a[last] = x;
}

int pop(){
	int res = a[first];
	len--;
	first++;
	return res;   
}

int front(){
	return a[first];
}

void clear(){
	len = 0;
	first = 1;
	last = 0;
}


int main(){


string operation;

	while(true){
		cin >> operation;
		if(operation == "exit") break;
		if(operation == "push"){
			int x;
			cin >> x;
			push(x);
			cout << "ok" << endl;
		}else if(operation == "pop"){
			cout << pop() << endl;
		}else if(operation == "front"){
			cout << front() << endl;
		}else if(operation == "size"){
			cout << size() << endl;
		}else if(operation == "clear"){
			clear();
			cout << "ok" << endl;
		}
	}

	cout << "bye" << endl;

	return 0;
}