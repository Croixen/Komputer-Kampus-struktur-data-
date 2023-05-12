#include <iostream>
using namespace std;

struct node{
	char data;
	node* right;
	node* left;
	node* top;
};

node* setNode(char idata){
	node* newNode = new node;
	newNode->data = idata;
	newNode -> left = NULL;
	newNode -> right = NULL;
	newNode -> top = NULL;
}

void preorder (node* Node){
	if(Node == NULL)return;
	cout<<Node->data<<" ";
	preorder(Node -> left);
	preorder(Node->right);
}

void postorder (node* Node){
	if(Node == NULL)return;
	postorder(Node -> left);
	postorder(Node->right);
	cout<<Node->data<<" ";
}

void inorder (node* Node){
	if(Node == NULL)return;
	inorder(Node -> left);
	cout<<Node->data<<" ";
	inorder(Node->right);
}

void preorderRL (node* Node){
	if(Node == NULL)return;
	cout<<Node->data<<" ";
	preorderRL(Node -> right);
	preorderRL(Node->left);
}

void postorderRL (node* Node){
	if(Node == NULL)return;
	postorderRL(Node -> right);
	postorderRL(Node->left);
	cout<<Node->data<<" ";
}

void inorderRL (node* Node){
	if(Node == NULL)return;
	inorderRL(Node -> right);
	cout<<Node->data<<" ";
	inorderRL(Node->left);
}

int main(){
	node* root = setNode('A');
	root -> left = setNode('B');
	root -> left -> left = setNode('D');
	root -> left -> left -> left = setNode('I');
	root -> left -> left -> right = setNode('J');
	root -> left -> right = setNode('F');
	root -> right = setNode('C');
	root -> right -> right= setNode('H');	
	root -> right -> left= setNode('G');
	root -> right -> left -> right= setNode('K');
	
	

	cout<<"\npreorderLR -> "; preorder(root);
	cout<<"\nInorderLR -> "; inorder(root);
	cout<<"\npostorderLR -> "; postorder(root);
	
	cout<<"\npreorderRL -> "; preorderRL(root);
	cout<<"\ninorderRL -> "; inorderRL(root);
	cout<<"\npostorderRL -> "; postorderRL(root);
	
	
	
	 
	
}
