#include <iostream>

using namespace std;

char a[101];
int len = 0;

int size(){
	return len;
}

void push(char x){
	len++;
	a[len] = x;
}

char pop(){
	char res = a[len];
	len--;
	return res;   
}

char back(){
	return a[len];
}

void clear(){
	len = 0;
}


int main(){


string operation;

	string s;
	getline(cin,s);


	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '('){
			push('(');
		}else{
			if(size() == 0){
				cout << "no";
				return 0;
			}else{
				pop();
			}
		}
	}

	if(size() > 0){
		cout << "no";
	}else{
		cout << "yes";
	}

	return 0;
}