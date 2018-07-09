#include <stack>
#include <iostream>

using namespace std;

int main(){
	
	string operation;
	stack<int> st;

	while(true){
		cin >> operation;
		if(operation == "exit") break;
		if(operation == "push"){
			int n;
			cin >> n;
			st.push(n);
			cout << "ok" << endl;
		}else if(operation == "pop"){
			cout << st.top() << endl;
			st.pop();
		}else if(operation == "back"){
			cout << st.top() << endl;
		}else if(operation == "size"){
			cout << st.size() << endl;
		}else if(operation == "clear"){
			
			while(st.size() != 0){
				st.pop();
			}
			

			cout << "ok" << endl;
		}
	}

	cout << "bye" << endl;

	return 0;
}