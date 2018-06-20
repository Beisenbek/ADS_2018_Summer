#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    int d = 10000;
    int r = -10000;

    for(int i = 0; i < n; ++i){
        if(abs(a[i] - x) < d){
            d = abs(a[i] - x);
            r = a[i];
        }
    }

    cout << r << endl;

    return 0;
}