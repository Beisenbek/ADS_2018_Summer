#include <iostream>

using namespace std;

int a[10000000];

int main(){

	int n;
	cin >> n;


	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int x;
	cin >> x;
	bool found = false;

	for(int i = 0; i < n; ++i){
		if(a[i] == x){
			found = true;
			break;
		}
	}
		
	if(found == true){
		cout << "found!";
	}else{
		cout << "not found!";
	}

	return 0;
}