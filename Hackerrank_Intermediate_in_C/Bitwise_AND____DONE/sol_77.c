#include <stdbool.h>


bool isItPowerOfTwo(int n){
    return ((n != 0) && ( ((n) & (n - 1)) == 0));
}

long sumOfSortedArray(int i){
    return (((long)i * (i + 1)) / 2);
}

long countPairs(int arr_count, int *arr){
    int freqSize = 4096;
    int* freqHash = (int*)calloc(freqSize, sizeof(int));

    for(int i = 0; i < arr_count; i++){
        freqHash[ arr[i] ]++;
    }


    int sum = 0;
    for(int i = 0; i < freqSize; i++){
        if(freqHash[i] == 0){
            continue;
        }
        for(int j = i; j < freqSize; j++){
            if(freqHash[j] == 0){
                continue;
            }
            if(isItPowerOfTwo(i & j)){
                if(i == j){
                    sum += sumOfSortedArray(freqHash[i]);
                }else{
                    sum += freqHash[i] * freqHash[j];
                }
            }
        }
    }


}