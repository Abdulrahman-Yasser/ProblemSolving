#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int max(int a, int b){
    return (a> b) ? a : b;
}


typedef struct Node Node;

struct Node{
    Node* parent;
    Node* lc;
    Node* rc;
    int val;
    int l;
    int r;
};


Node* createNode(Node* parent, int l, int r){
    Node* node = (Node*)malloc(sizeof(Node));
    node->l = l;
    node->r = r;
    node->parent = parent;
    node->lc = NULL;
    node->rc = NULL;
    node->val = r - l;
}

void split(Node* node, int x){
    if(x == node->l || x == node->r){
        return;
    }
    if(node->lc){
        if (x == node->lc->r) {
            return;
        }
        if(x > node->lc->r){
            split(node->rc, x);
        }else{
            split(node->lc, x);
        }
        node->val = max(node->lc->val, node->rc->val);
    }else{
        node->rc = createNode(node, x, node->r);
        node->lc = createNode(node, node->l, x);
        node->val = max(node->lc->val, node->rc->val);
    }
}


long* getMaxArea(int w, int h, int isVertical_count, bool* isVertical, int distance_count, int* distance, int* result_count){
    *result_count = isVertical_count;
    Node* h_root, *w_root;
    h_root = createNode(NULL, 0, h);
    w_root = createNode(NULL, 0, w);

    long* result = (long*)malloc(sizeof(long) * distance_count);

    for(int i = 0; i < distance_count; i++){
        if(isVertical[i]){
            split(w_root, distance[i]);
        }else{
            split(h_root, distance[i]);
        }
        result[i] = h_root->val * w_root->val;
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