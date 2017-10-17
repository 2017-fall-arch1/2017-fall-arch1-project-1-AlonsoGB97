#ifndef bSearchTree_included
#define bSearchTree_included


/* Binary Search Tree item */
struct BSTItem{
  struct BSTItem *left;
  struct BSTItem *right;
  char *str
} 

/* Create new Tree */
struct BSTItem *llAlloc();

/* Add element into BST */
BSTItem insertItem(BSTItem *head, char *newItem);

/*Remove element into BST*/
BSTItem removeItem(BSTItem *bs, char *str);

/*Print all elements of the BST*/
void printItems(BSTItem *head);

#endif /* included */
