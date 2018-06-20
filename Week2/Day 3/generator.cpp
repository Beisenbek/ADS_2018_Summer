#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

	freopen("test3.txt","w",stdout);
	int n = 1000000;

	cout << n << endl;

	for(int i = 1; i <= n; ++i){
		cout << i << " ";
	}

	int x = n + 1;
	cout << endl << x;


	return 0;
}