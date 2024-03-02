#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


typedef struct Node {
    struct Node* parent;
    int l;
    int r;
    struct Node* lc;
    struct Node* rc;
    int val;
    int (*op)(int, int);
} Node;

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* createNode(Node* parent, int l, int r, int (*op)(int, int)) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->parent = parent;
    node->l = l;
    node->r = r;
    node->lc = NULL;
    node->rc = NULL;
    node->val = r - l;
    node->op = op;
    return node;
}

void split(Node* node, int x) {
    if (x == node->l || x == node->r) {
        return;
    }
    if (node->lc) {
        if (x == node->lc->r) {
            return;
        }
        if (x < node->lc->r) {
            split(node->lc, x);
        } else {
            split(node->rc, x);
        }
        node->val = node->op(node->lc->val, node->rc->val);
    } else {
        node->lc = createNode(node, node->l, x, node->op);
        node->rc = createNode(node, x, node->r, node->op);
        node->val = node->op(x - node->l, node->r - x);
    }
}

long* getMaxArea(int w, int h, int isVertical_count, bool* isVertical, int distance_count, int* distance, int* result_count) {
    *result_count = isVertical_count;
    long* result = (long*)malloc(isVertical_count * sizeof(long));

    Node* w_root = createNode(NULL, 0, w, max);
    Node* h_root = createNode(NULL, 0, h, max);

    int i;
    for (i = 0; i < isVertical_count; i++) {
        if (isVertical[i]) {
            split(w_root, distance[i]);
        } else {
            split(h_root, distance[i]);
        }
        result[i] = (long)w_root->val * h_root->val;
    }

    free(w_root);
    free(h_root);

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