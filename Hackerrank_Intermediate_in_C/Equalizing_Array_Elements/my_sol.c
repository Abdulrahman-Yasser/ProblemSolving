#include <stdio.h>
#include <stdlib.h>

#include <limits.h>


int dp[30000][2];

int min(int a, int b){
    return (a < b) ? a : b;
}


int solution(int* arr, int arr_count, int threshold, int d){
    int steps, minOp = INT_MAX;
    for(int i = 0; i < arr_count + 1; i++){
        dp[i][0] = 0;
        dp[i][1] = 0;
    }
    for(int i = 0; i < arr_count; i++){
        steps = 0;
        while(1){
            dp[arr[i]][0] += steps;
            dp[arr[i]][1] += 1;

            if(dp[arr[i]][1]  >= threshold){
                minOp = min(minOp, dp[arr[i]][0]);
            } 
            if(arr[i] == 0){
                break;
            }
            arr[i] /= d;
        }
    }
    return minOp;
}
