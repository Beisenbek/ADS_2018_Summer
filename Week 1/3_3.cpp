#include <iostream>

using namespace std;

bool isPrime(int x){
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    return false;
}

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int x;
    cin >> x;
    cout << isPrime(x) << endl;
    return 0;
}

