#ifndef bSearchTree_included
#define bSearchTree_included


/* Binary Search Tree item */
typedef struct BSTItem_s{
  struct BSTItem_s *left;
  struct BSTItem_s *right;
  char *str
} BSTItem;

/* Head of BST */
typedef struct{
  BSTItem *head;
} BST;


/* Create new Tree */
BSTItem_s *llAlloc();

/* Add element into BST */
BSTItem_s insertItem(BSTItem_s *head, char *newItem);

/*Remove element into BST*/
void removeItem(BST *bs);

/*Print all elements of the BST*/
void printItems(BSTItem_s *head);

#endif /* included */
