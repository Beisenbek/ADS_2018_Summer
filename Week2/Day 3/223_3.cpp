#include <iostream>

using namespace std;

int main(){
    int n,t,x;
    cin >> n;
    int a[1001];
    for(int i = 0; i <=1000; ++i){
        a[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        cin >> t;
        a[t] = a[t] + 1;
    }
    cin >> x;
    cout << a[x] << endl;

    return 0;
}