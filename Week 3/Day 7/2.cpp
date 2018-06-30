#include <iostream>

using namespace std;

int f(int n){
	cout << n << endl;
	if(n == 1) return 1;
	return f(n-1) + n;
}

int main(){

	int n;
	cin >> n;
	cout << f(n);
	
	return 0;
}