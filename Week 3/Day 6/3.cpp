#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct node{
	int key;
	node* left;
	node* right;
};

node* create_node(int val){
	node* nnode = (node*) malloc(sizeof(node));
	nnode->key = val;
	nnode->left = NULL;
	nnode->right = NULL;
	return nnode;
}

node * add_node(node * root, int val){
	if(root == NULL){
 		root = create_node(val);
	}else if(val < root->key){
		if(root->left == NULL){
			root->left = create_node(val);
		}else{
			add_node(root->left,val);
		}
	}
	else if(val > root->key){
		if(root->right == NULL){
			root->right = create_node(val);
		}else{
			add_node(root->right,val);
		}
	}
	return root;
}

node * find_node(node * root, int val){
	if(root == NULL){
 		return NULL;
	}
	else if(root->key == val){
		return root;
	}
	else if(val < root->key){
		return find_node(root->left,val);
	}
	else if(val > root->key){
		return find_node(root->right,val);
	}
}

void print_tree(node * root){
	if(root == NULL) return;
	cout << root->key << endl;
	print_tree(root->left);
	print_tree(root->right);
}

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,10};
    random_shuffle(a,a+10);

    node * root = create_node(a[0]);

    for(int i = 1; i < 10; ++i){
    	add_node(root,a[i]);
    }

    int x;
    cin >> x;

    if(find_node(root,x) != NULL) cout << "found!";
    else cout << "not found!"<< endl;

	return 0;
}