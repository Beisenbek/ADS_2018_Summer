#include <iostream>
	
using namespace std;

int mabs(int x){
	if(x < 0) return -x;
	return x;
}

int find(int x, int  *a, int n){
	int l = 0;
	int r = n - 1;
	int m;

	while(l < r){
		m = (l + r) / 2;
		if(x > a[m]) l = m + 1;
		else r = m;

	}

	int d1 = mabs(x - a[m]);
	int d2 = mabs(x - a[r]);
	int d3 = mabs(x - a[r-1]);

	int res;

	if(l != m){
		if(d1 <= d2) res = a[m];
		else res = a[r] ;
	}else{
		if(d3 <= d2) res = a[r-1];
		else res = a[r];
	}


	return res;
}


int main(){

	int n,k,t;
	cin >> n >> k;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(int i = 0; i < k; ++i){
		cin >> t;
		cout << find(t,a,n) << endl;
	}




	return 0;
}