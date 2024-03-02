#include <stdio.h>
#include <stdlib.h>


#define LIMIT 1000000
#define MOD 1000000007


typedef struct FWT FWT;

struct FWT{
    int n;
    int* a;
};

FWT* CreateFWT(int z){
   FWT* tree= (FWT*)malloc(sizeof(FWT)) ;
   tree->n = z;
   tree->a = (int*)malloc(sizeof(int) * z);
   return tree;
}

int get(FWT* tree, int x){
    int sum = 0;
    for(int i = x; i > 0; i -= (i & -i)){
        sum = (sum + tree->a[i]) % MOD;
    }
}

void rank(FWT* tree, int x, int k){
    for(int i = x; i < tree->n; i += (i & -i)){
        tree->a[i] = (tree->a[i] + k) % MOD;
    }
}



int sortedSum(int a_count, int* a) {
    int pos = 0, total = 0, greater = 0, ans = 0, c = 0;
    FWT* pre = CreateFWT(LIMIT);
    FWT* post = CreateFWT(LIMIT);

    for(int i = 0; i < a_count; i++){
        pos = get(pre, a[i]) + 1;
        greater = (total - get(post, a[i])) % MOD;
        if(greater < 0){
            greater += MOD;
        }

        c = (c + 1LL * pos * a[i] % MOD + greater) % MOD;
        ans = (c + ans) % MOD;
        
        rank(pre, a[i], 1);
        rank(post, a[i], a[i]);
        total = (total + a[i]) % MOD;

    }
    return ans;


}

