#include <stdbool.h>


int SumOfSortedArray(int i){
    return ((i) * (i - 1));
}

bool isItPowerOfTwo(int i){
    return ((i != 0) && ((i & (i - 1)) == 0));
}


long countPairs(int arr_count, int *arr){

    int freqSize = 4096;
    int* freqHash = (int*)calloc(freqSize, sizeof(int));

    for(int i = 0; i < arr_count; i++){
        freqHash[ arr[i] ]++;
    }

    int result = 0;
    for(int i = 0; i < freqSize; i++){
        if( freqHash[ i ] == 0){
            continue;
        }

        for(int j = i; j < freqSize; j++){
            if( freqHash[ j ] == 0){
                continue;
            }

            if(isItPowerOfTwo(i & j)){
                if( i == j)
                    result += SumOfSortedArray(i);
                else
                    result += (freqHash[i] * freqHash[j]);
            }
        }
        return result;

    }


}