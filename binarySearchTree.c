
#include <studio.h>
#include <stdlib.h>
#include<assert.h>
#include "binarySearchTree.h"



/* create a new tree*/
BSTItem_s *llAlloc()
{
  BSTItem_s *tNode = (BSTItem_s *)malloc(sizeof(BSTItem_s));
  tNode = 0;
  return tNode;
}

BSTItem_s insertItem(BSTItem_s *head, char *newItem)
{
  if(head == NULL){
    head = llAlloc();
    head -> str = strdup(newItem);
    head -> left = NULL;
    head -> right = NULL;
    return head;
  }
  else if(strcmp(newItem,head -> str) < 0){
    head -> left = insertItem(head -> left, newItem);
  }
  else{
    head -> right = insertItem(head -> right, newItem);
  }
  return head;
}

void removeItem(BST *bs)
{

}

void printItems(BSTItem_s *head)
{
  if(head != NULL){
    printItems(head -> left);
    printf("%s\n", head -> str);
    printItems(head -> right);
  }
}
