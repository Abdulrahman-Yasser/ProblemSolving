#include <stdio.h>
#include <stdlib.h>

#define A_LIMIT (1000000)
#define M (1000000007)

typedef struct tree tree;
struct tree{
    int n;
    int* a;
};

tree* createTree(int x){
    tree* z = (tree*)malloc(sizeof(tree));
    z->n = x;
    z->a = (int*)calloc(x, sizeof(int));
    return z;
}

void update(tree* the_tree, int x, int k){
    for(int i = x; i < the_tree->n; i += (i & -i)){
        the_tree->a[i] = (the_tree->a[i] + k ) % M;
    }
}


int get(tree* the_tree, int x){
    int s = 0;
    for(int i = x; i > 0; i -= (i & -i)){
        s = (the_tree->a[i] + s) % M;
    }
    return s;
}



int sortedSum(int arr_count, int *arr){
    tree* post = createTree(A_LIMIT);
    tree* pre = createTree(A_LIMIT);

    int position = 0, great = 0, result = 0, temp = 0, c = 0, answer = 0;
    
    for(int i = 0; i < arr_count; i++){
        position = get(post, arr[i]) + 1;
        great = (temp - get(post, arr[i])) % M;
        
        if(great < 0){
            great += M;
        }

        c = (c + 1LL * position * arr[i] % M  + great) % M;
        answer = (answer + c) % M;

        update(post, arr[i], 1);
        update(pre, arr[i], arr[i]);

        temp = (arr[i]+ temp) % M;

    }
    return answer;

}




int n = 4;
int a[] = {4, 3, 2, 1};

int main(void){
	printf("%d\n",sortedSum(n, a) );
}







