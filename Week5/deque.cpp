#include <iostream>

using namespace std;


int a[100001];
int len = 0;
int first = 50001;
int last = 50000;

int size(){
	return len;
}

int push_front(int x){
	len++;
	first--;
	a[first] = x;
}

int push_back(int x){
	len++;
	last++;
	a[last] = x;
}

int pop_front(){
	int res = a[first];
	len--;
	first++;
	return res;   
}

int pop_back(){
	int res = a[last];
	len--;
	last--;
	return res;   
}

int front(){
	return a[first];
}

int back(){
	return a[last];
}

void clear(){
	len = 0;
	first = 50001;
	last = 50000;
}


int main(){


string operation;

	while(true){
		cin >> operation;
		if(operation == "exit") break;
		if(operation == "push_front"){
			int x;
			cin >> x;
			push_front(x);
			cout << "ok" << endl;
		}else if(operation == "push_back"){
			int x;
			cin >> x;
			push_back(x);
			cout << "ok" << endl;
		}else if(operation == "pop_front"){
			cout << pop_front() << endl;
		}else if(operation == "pop_back"){
			cout << pop_back() << endl;
		}else if(operation == "front"){
			cout << front() << endl;
		}else if(operation == "back"){
			cout << back() << endl;
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



