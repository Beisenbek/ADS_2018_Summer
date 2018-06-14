#include <iostream>

using namespace std;

int f(int a, int n){
    if(n == 0) return 1;
    if(n == 1) return a;
    return a * f(a,n-1);
}

string f2(int x){
    string res = "";

    while(x > 0){
        res = char(x % 2 + 48) + res;
        x = x / 2;
    }

    return res;
}

string f3(string s, int i){
    s[s.size() - 1 - i] = '0';
    return s;
}

int f4(string s){
    int res = 0;

    for(int i = 0; i < s.size(); ++i){
        res = res + int(s[i]-48) * f(2,s.size() - 1 - i);
    }

    return res;
}

int main(){

    int x,i;
    cin >> x >> i;

    string s = f2(x);
    string t = f3(s,i);

    int y = f4(t);

    cout << y << endl;


    return 0;
}