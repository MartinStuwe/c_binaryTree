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
    
    
    printf("Tree Root data: %d\n", (&Tree)->left->left->data);
    return 0;


}