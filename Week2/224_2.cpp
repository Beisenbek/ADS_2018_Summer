#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int x;
    cin >> x;

    bool isFound = false;

    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            isFound = true;
            break;
        }
    }

    if(isFound) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}