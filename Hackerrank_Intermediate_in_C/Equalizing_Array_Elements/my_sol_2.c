#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min(int a, int b){
    return (a > b) ? a : b;
}

int solution(int* arr, int arr_count, int threshold, int d){
    int Hash_table[30001][2] = {0};
    int steps;
    int minOp = INT_MAX;
    for(int i = 0; i < arr_count; i++){
        steps = 0;
        while(1){
            Hash_table[arr[i]][0] += 1;
            Hash_table[arr[i]][1] += steps;
            if(Hash_table[arr[i]][0] >= threshold){
                minOp = min(minOp, Hash_table[arr[i]][1]);
            }
            if(arr[i] == 0){
                break;
            }
            arr[i] /= d;
        }
    }
}