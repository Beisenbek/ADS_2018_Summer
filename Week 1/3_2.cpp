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

void run_all_test(){
   int tests[] = {1,2,3,4,5,6,7,8,9,10};
   int answers[] = {0,1,1,0,1,0,1,0,0,0};
   for(int i = 0; i < 10; ++i){
       if(isPrime(tests[i]) == answers[i]){
           cout << "test " << i + 1 << " passed!" << endl;
       }else{
           cout << "test " << i + 1 << " failed!" << endl;
       }
   }
}
int main(int argc, char ** argv){
    if(argc > 1){
        run_all_test();
    }else{
        int x;
        cin >> x;
        cout << isPrime(x) << endl;
    }
    return 0;
}

