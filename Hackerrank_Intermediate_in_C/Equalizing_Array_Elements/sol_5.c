#include <stdio.h>
#include <stdlib.h>

#include <limits.h>

int dp[30000][2];

int min(int a, int b){
    return (a < b) ? a : b;
}

int solution(int* arr, int arr_count, int threshold, int d){
    int z, steps, result = INT_MAX;
    for(int i = 0; i < arr_count; i++){
        steps = 0;
        while(1){
            dp[arr[i]][0] += steps;
            dp[arr[i]][1] += 1;
            
            if(dp[arr[i]][1] >= threshold ){
                result = min(dp[arr[i]][0], result);
            }

            if(arr[i] == 0){
                break;
            }
            arr[i] /= d;
        }
    }
    return result;
}