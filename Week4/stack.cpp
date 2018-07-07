#include <iostream>

using namespace std;

int a[101];
int len = 0;

int size(){
	return len;
}

int push(int x){
	len++;
	a[len] = x;
}

int pop(){
	int res = a[len];
	len--;
	return res;
}

int back(){
	return a[len];
}

void clear(){
	len = 0;
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