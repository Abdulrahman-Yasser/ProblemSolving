#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


typedef struct Node Node;


int max(int a, int b){
    return (a > b) ? a : b;
}


struct Node{
    Node* parent;
    Node* lc;
    Node* rc;
    int l;
    int r;
    int val;
};

Node* createNode(Node* parent, int l, int r){
    Node* node = (Node*)malloc(sizeof(Node));
    node->parent = parent;
    node->lc = NULL;
    node->rc = NULL;
    node->l = l;
    node->r = r;
    node->val = r - l;
    return node;
}



void split(Node* the_node, int x){
    if(x == the_node->l || x == the_node->r){
        return;
    }


    if(the_node->lc){
        if(x > the_node->lc->r){
            split(the_node->rc, x);
        }else{
            split(the_node->lc, x);
        }
        the_node->val = max(the_node->lc->val, the_node->rc->val);
    }else{
        the_node->lc = createNode(the_node, the_node->l, x);
        the_node->rc = createNode(the_node, x, the_node->r);
        the_node->val = max(the_node->lc->val, the_node->rc->val);
    }

}

long* getMaxArea(int w, int h, int isVertical_count, bool* isVertical, int distance_count, int* distance, int* result_count)
{   
    long* result = (long*)malloc(sizeof(long) * isVertical_count);

    Node* w_root = createNode(NULL, 0, w);
    Node* h_root = createNode(NULL, 0, h);

    *result_count = distance_count;
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