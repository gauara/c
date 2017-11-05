/*
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * left;
	struct node * right;
};

struct node* newNode(int data) {
 struct node* node = (struct node*) malloc(sizeof(struct node));
 node->data = data;
 node->left = NULL;
 node->right = NULL;
 return node; 
}

void inorder(struct node* root) {
	if (root == NULL) {
  return;
 } else {
		inorder(root->left);
		printf("data : %d \n", root->data);	
		inorder(root->right);
	}
}

void preorder(struct node * root) {
 if (root == NULL)
   return;

 printf("data: %d \n", root->data);
 preorder(root->left); 
 preorder(root->right); 
}

void postorder(struct node * root) {
 if (root == NULL)
   return;
 postorder(root->left); 
 postorder(root->right); 
 printf("data: %d \n", root->data);
}

int main() {
	// craete a new node or something 

 struct node *root  = newNode(1);
 root->left             = newNode(2);
 root->right           = newNode(3);
 root->left->left     = newNode(4);
 root->left->right   = newNode(5); 
 
 printf("\nInorder traversal of binary tree is \n");
 inorder(root);  

 printf("\nPreorder traversal of binary tree is \n");
 preorder(root);  

 printf("\nPostorder traversal of binary tree is \n");
 postorder(root);  

	return 0;

}