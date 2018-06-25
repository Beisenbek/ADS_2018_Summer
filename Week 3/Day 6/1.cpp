#include <iostream>
#include <stdlib.h>

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
		return root;
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
}

void print_tree(node * root){
	if(root == NULL) return;
	cout << root->key << endl;
	print_tree(root->left);
	print_tree(root->right);
}

int main(){

	node* root = create_node(11); 
	add_node(root,12);

	print_tree(root);
	
	return 0;
}