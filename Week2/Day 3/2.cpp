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

    int l = 0,r = n - 1;

    int m =  (l + r )/2;
    bool found = false;

    if(x <= r){
        while(l<r){
            cout << l << " " << r << endl;
            if(a[m] > x){
                r = m;
            }
            else if(a[m] < x){
                l = m;
            }else if(a[m] == x){
                found = true;
                break;
            }
            m =  (l + r )/2;
        }
    }

    if(found){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}