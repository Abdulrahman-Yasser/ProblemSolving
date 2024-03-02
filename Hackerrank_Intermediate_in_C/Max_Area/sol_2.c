#include <stdlib.h>
#include <stdio.h>

#include <stdbool.h>

typedef struct Node Node;

struct Node{
    Node* parent;
    Node* lc;
    Node* rc;
    int l;
    int r;
    int val;
};

int max(int a, int b){
    return (a > b) ? a : b;
}


Node* createNode(Node* parent, int l, int r){
    Node* the_node = (Node*)malloc(sizeof(Node));
    the_node->parent = parent;
    the_node->l = l;
    the_node->r = r;
    the_node->val = r - l;
    the_node->rc = NULL;
    the_node->lc = NULL;
}

void split(Node* node, int x){
    if(x == node->l || x == node->r){
        return;
    }

    if(node->lc){
        if(x > node->lc->r){
            split(node->rc, x);
        }else{
            split(node->lc, x);
        }
        node->val = max(node->lc->val, node->rc->val);
    }else{
        node->lc = createNode(node, node->l , x);
        node->rc = createNode(node, x, node->r);
        node->val = max(node->lc->val, node->rc->val);
    }
}


long* getMaxArea(int w, int h, int isVertical_count, bool* isVertical, int distance_count, int* distance, int* result_count) {
    long* result = (long*)malloc(sizeof(long) * distance_count);
    *result_count = distance_count;
    
    Node* w_root, *h_root;
    w_root = createNode(NULL, 0, w);
    h_root = createNode(NULL, 0, h);

    for(int i = 0; i < distance_count; i++){
        if(isVertical[i]){
            split(w_root, distance[i]);
        }else{
            split(w_root, distance[i]);
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