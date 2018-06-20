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

	int l = 0;
	int r = n - 1;
	int m;

	while(l < r){
		m = (l + r) / 2;
		if(x > a[m]) l = m + 1;
		else r = m;
	}

	cout << l << " " << r << endl;

	if(a[r] == x){
		cout << "found!";
	}else{
		cout << "not found!";
	}

	return 0;
}