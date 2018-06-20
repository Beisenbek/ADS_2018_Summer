#include <iostream>
#include <map>

using namespace std;

int main(){
    int n,t,x;
    cin >> n;
    map<int,int> m;

    for(int i = 0; i < n; ++i){
        cin >> t;
        m[t] = m[t] + 1;
    }

    cin >> x;
    cout << m[x] << endl;

    return 0;
}