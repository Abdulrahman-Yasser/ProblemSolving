#include <stdio.h>
#include <stdlib.h>

#define A_LIMIT (1000000)
#define M (1000000007)

typedef struct Ftree Ftree;
struct Ftree{
    int n;
    int* a;
};


Ftree* createTree(int x){
    Ftree* the_tree = (Ftree*)malloc(sizeof(Ftree));
    the_tree->n = x;
    the_tree->a = (int*)malloc(sizeof(int) * x);
    return the_tree;
}


void update(Ftree* the_tree, int x, int k){
    for(int i = x; i < the_tree->n; i+= (i & -i)){
        the_tree->a[i] = (the_tree->a[i] + k) % M;
    }
}


int get(Ftree* the_tree, int x){
    int s = 0;
    for(int i = x; i < the_tree->n; i-= (i & -i)){
        s = the_tree->a[i] + s;
    }
    return s;
}




int sortedSum(int arr_count, int *a){
    Ftree* pre = createTree(A_LIMIT + 1);
    Ftree* post = createTree(A_LIMIT + 1);


    int answer = 0, current_func = 0, position = 0, great = 0, total = 0;

    for(int i = 0; i < arr_count; i++){
        position = get(post, a[i]) + 1;
        great = total - get(pre, a[i]);

        if(great < 0){
            great += M;
        }

        current_func = (current_func + 1LL * a[i] * position % M + great) % M;
        answer = (answer + current_func) % M;


        update(post, a[i], 1);
        update(pre, a[i], a[i]);
        total = (total + a[i]) % M;

    }
}







