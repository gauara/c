#include <stdio.h>
#include <stdlib.h>

struct node* newNode(int data) {
 struct node* node = (struct node*) malloc(sizeof(struct node));
 node->data = data;
 node->left = NULL;
 node->right = NULL;
 return node; 
};

struct node {
 int data,
 struct node* left,
 struct node* right
};

struct queueNode {
 struct node*;
 struct queueNode* next = NULL
};

struct qnode* createQueue(int data) {
 struct queueNode* qnode = (struct queueNode*)malloc(sizeof(struct queueNode));
 qnode->data = data;
 qnode->next = NULL;
};

void bfs(struct node* root, struct queueNode* q) {
 if (root == NULL)
  return;

 whille(q) {
  //data = deque(q);
  //print(data);


 }
}


int main() {
 struct node *root  = newNode(1);
 root->left             = newNode(2);
 root->right           = newNode(3);
 root->left->left     = newNode(4);
 root->left->right   = newNode(5); 

 return 0;

}