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

extern int IlDoCheck;

/* Create new Tree */
BST *llAlloc();

/* Add element into BST */
void insertItem(BST *bs, char *s);

/*Remove element into BST*/
void removeItem(BST *bs);

/*Print all elements of the BST*/
void printItems(BST *bs, char *msg);

#endif /* included */
