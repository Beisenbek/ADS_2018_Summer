#include <iostream>

using namespace std;
string f2(int x){
    string res = "";

    while(x > 0){
        res = char(x % 2 + 48) + res;
        x = x / 2;
    }

    return res;
}

int main(){

   int a,i;
   cin >> a >> i;
   int one = (1 << 20) - 1;
   int one_2 = (1 << i) - 1;
   int x = (one << (i + 1)) + one_2;
   
   cout << (a & x) << endl;

    return 0;
}