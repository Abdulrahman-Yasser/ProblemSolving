#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int max(int a, int b){
    return (a > b) ? a : b;
}


typedef struct Node Node;
struct Node{
    Node* parent;
    Node* lc;
    Node* rc;
    int l;
    int r;
    int val;
};


Node* createNode(Node* parent, int l, int r){
    Node* the_new_node = (Node*)malloc(sizeof(Node));
    the_new_node->l = l;
    the_new_node->r = r;
    the_new_node->val = r - l;
    the_new_node->lc = NULL;
    the_new_node->rc = NULL;
    return the_new_node;
}


void split(Node* the_node, int x){
    if(x == the_node->l || x == the_node->r){
        return;
    }
    if(the_node->lc){
        if(x < the_node->lc->r){
            split(the_node->lc, x);
        }else{
            split(the_node->rc, x);
        }
        the_node->val = max(the_node->rc->val, the_node->lc->val);
    }else{
        the_node->lc = createNode(the_node, the_node->l, x);
        the_node->rc = createNode(the_node, x, the_node->r);
        the_node->val = max(x - the_node->l, the_node->r - x);
    }

}


long* getMaxArea(int w, int h, int isVertical_count, bool* isVertical, int distance_count, int* distance, int* result_count) {
    
    long* result = (long*)malloc(sizeof(long)* distance_count);
    Node *w_root, *h_root;
    *result_count = distance_count;
    w_root = createNode(NULL, 0, w);
    h_root = createNode(NULL, 0, h);

    for(int i = 0; i < distance_count; i++){
        if(isVertical[i]){
            split(w_root, distance[i]);
        }else{
            split(h_root, distance[i]);
        }
        result[i] = w_root->val * h_root->val;
    }

    return result;
}


 


int w = 4;
int h = 3;
bool isV[2] = {1, 1};
int d[2] = {1, 3};

int main(void){
    int r;
    long* res;
    res = getMaxArea(w, h, 2, isV, 2, d, &r);

    for(int i = 0; i < r; i++){
        printf("%d, ",res[i]);
    }

}