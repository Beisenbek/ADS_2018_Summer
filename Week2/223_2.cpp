#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,t;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i){
       cin >> t;
       v.push_back(t);
    }

    int x;
    cin >> x;
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(v[i] == x){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}