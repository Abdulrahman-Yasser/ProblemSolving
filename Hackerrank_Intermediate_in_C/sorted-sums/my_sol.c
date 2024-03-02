#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MOD 1000001


typedef struct treee treee;
struct treee{
    int* a;
    int n;
};


treee* createTree(int x){
    treee* a_tree = malloc(sizeof(treee));
    a_tree->n = x;
    a_tree->a = (int*)calloc(x, sizeof(int));
    return a_tree;
}

void update(treee* the_tree, int x, int k){
    for(int i = x; i <= the_tree->n; i+= (i & -i)){
        the_tree->a[i] = (the_tree->a[i] + k) % MOD;
    }
}

int getRank (treee* the_tree, int x){
    int sum = 0;
    for(int i = x; i <= the_tree->n; i-= (i & -i)){
        sum = (sum + the_tree->a[i]) % MOD;
    }
    return sum;
}





int sortedSum(int arr_count, int *a){

}

