#include <stack>
#include <iostream>

using namespace std;

stack<int> st;

int main(){

	int n;
	cin >> n;


	int p = 1;
	int q = 1;
	st.push(2);

	while(n-- > 2){
    	q = st.top();
		st.push(q + p);
		p = q;
	}

	/*while(st.size() > 0){
		cout << st.top() << endl;
		st.pop();
	}*/

	cout << st.top() << endl;

	return 0;
}