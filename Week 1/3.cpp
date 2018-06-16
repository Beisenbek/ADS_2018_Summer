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

void test1(){
    int x = 1;
    if(isPrime(x) == false){
        cout << "test 1 passed!" << endl;
    }else{
        cout << "test 1 failed!" << endl;
    }
}
void test2(){
    int x = 2;
    if(isPrime(x) == true){
        cout << "test 2 passed!" << endl;
    }else {
        cout << "test 2 failed!" << endl;

    }
}
void test3(){
    int x = 11;
    if(isPrime(x) == true){
        cout << "test 3 passed!" << endl;
    }else{
        cout << "test 3 failed!" << endl;
    }
}
void run_all_test(){
    test1();
    test2();
    test3();
}

int main(){

    run_all_test();

    return 0;
}

