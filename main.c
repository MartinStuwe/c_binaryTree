#include <stdio.h>

struct InternalNode {
    int data;
    struct InternalNode *left;
    struct InternalNode *right;
};

int main(void){
    struct InternalNode Tree = {0,
                                &(struct InternalNode){1,
                                                       &(struct InternalNode){2, NULL, NULL},
                                                       &(struct InternalNode){3, NULL, NULL}},
                                &(struct InternalNode){4,
                                                       &(struct InternalNode){5, NULL, NULL},
                                                       &(struct InternalNode){6, NULL, NULL}}};
    
    
    printf("Tree root i.e. node 0: %d\n", (&Tree)->data);
    printf("Tree node 1: %d\n", (&Tree)->left->data);
    printf("Tree node 2: %d\n", (&Tree)->left->left->data);
    printf("Tree node 3: %d\n", (&Tree)->left->right->data);
    printf("Tree node 4: %d\n", (&Tree)->right->data);
    printf("Tree node 5: %d\n", (&Tree)->right->left->data);
    printf("Tree node 6: %d\n", (&Tree)->right->right->data);
    return 0;


}