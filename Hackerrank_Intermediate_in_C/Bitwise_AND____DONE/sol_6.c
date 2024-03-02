
#include <stdbool.h>

bool isPowerOfTwo(int n){
    return (n != 0) && ((n & (n  - 1)) == 0);
}


int sumOfSortedArray(int n){
    return ((long)n * (n + 1)) / 2;
}


long countPairs(int arr_count, int *arr){
    int freqDistSize = 4096;
    int *freqHash = (int*)calloc(freqDistSize, sizeof(int));

    for(int i = 0; i < arr_count; i++){
        freqHash[ arr[i] ]++;
    }
    long counterOfPairs = 0;
    for(int i = 0; i < freqDistSize; i++){
        if(freqHash[i] == 0){
            continue;
        }
        for(j = i; j < freqDistSize; j++){
            if(freqHash[j] == 0){
                continue;
            }
            if(isPowerOfTwo(i & j)){
                
            }
        }
    }

}

