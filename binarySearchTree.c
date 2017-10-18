
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binarySearchTree.h"

/* create a new tree*/
struct BSTItem *llAlloc()
{
  struct BSTItem *tNode = (struct BSTItem *)malloc(sizeof(struct BSTItem));
  tNode = 0;
  return tNode;
}
char * strdup(char *str)
{
  char *copy;
  int len = 0;
  for(len = 0; str[len]; len++)
    ;
  copy = (char *)malloc (len+1);
  if(copy != NULL)
    for(len = 0; str[i]; i++){
      copy[i] = str[i];
    }
  copy[len] = 0; 
  return copy;
}
struct BSTItem *insertItem (struct BSTItem *root, char *newItem)
{
  if(root == NULL){
    root = llAlloc();
    root -> str = strdup(newItem);
    root -> left = NULL;
    root -> right = NULL;
    return root;
  }
  else if(strcmp(newItem,root -> str) < 0){
    root -> left = insertItem(root -> left, newItem);
  }
  else{
    root -> right = insertItem(root -> right, newItem);
  }
  return root;
}

struct BSTItem  *removeItem(struct BSTItem *root, char *str)
{
  if(root == NULL){
    return root;
  }
  if(strcmp(str, root -> str) < 0){
    root -> left = removeItem(root -> left, str);
  }
  else if(strcmp(str, root -> str) > 0){
    root -> right = removeItem(root -> right, str);
  }
  else{
    if(root -> left == NULL){
      struct BSTItem *temp = root -> right;
      free(root);
      return temp;
    }
    else if(root -> right == NULL) {
      struct BSTItem *temp = root -> left;
      free(root);
      return temp;
    }
    struct BSTItem *temp = root-> right;
    
    while(temp -> left != NULL){
      temp = temp -> left;
    }
    root -> str = temp -> str;

    root -> right = removeItem(root ->right, temp->str);
  }
  return root;
}

void printItems(struct BSTItem *head)
{
  if(head != NULL){
    printItems(head -> left);
    printf("%s\n", head -> str);
    printItems(head -> right);
  }
}
int main()
{
  struct BSTItem *tree = NULL;
  char a[] = "saas";
  tree = insertItem(tree, a);
  //tree = insertItem(tree, "perro");

  printItems(tree);
}
