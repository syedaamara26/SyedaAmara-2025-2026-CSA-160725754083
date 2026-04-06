#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left;
struct node*right;
};
struct node* createnode(int value){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return temp;
}
struct node*createTree(){
int value;
printf("enter value(-1 for no node):");
scanf("%d",&value);
if(value==-1)
return NULL;
struct node*temp=createnode(value);
printf("Enter left child of %d\n",value);
temp->left=createTree();
printf("Enter right child of %d\n",value);
temp->right=createTree();
return temp;
}
void inorder(struct node*root){
if(root==NULL)
return;
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
void preorder (struct node*root){
if(root==NULL)
return;
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node*root){
if (root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
int main(){
struct node*root=NULL;
printf("create Binary tree\n");
root=createTree();
printf("\n inorder traversal:");
inorder(root);
printf("\n preorder traversal:");
preorder(root);
printf("\n postorder traversal:");
postorder(root);
return 0;
}
