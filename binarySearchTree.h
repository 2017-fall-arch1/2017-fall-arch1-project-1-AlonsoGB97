#ifndef bSearchTree_included
#define bSearchTree_included


/* Binary Search Tree item */
struct BSTItem{
  struct BSTItem *left;
  struct BSTItem *right;
  char *str;
};

/* Create new Tree */
struct BSTItem *llAlloc();

/* Add element into BST */
struct BSTItem *insertItem(struct BSTItem *head, char *newItem);

/*Remove element into BST*/
struct BSTItem *removeItem(struct BSTItem *bs, char *str);
/*Print all elements of the BST*/
void printItems(struct BSTItem *head);

#endif /* included */
