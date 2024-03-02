#include <stdio.h>
#include <stdlib.h>

#include <limits.h>

int dp[200000][2];


int min(int a, int b){
    return (a < b) ? a : b;
}

int solution(int* arr, int arr_count, int threshold, int d){

    int minOfAll = INT_MAX;

    for(int i = 0; i < arr_count; i++){
        int steps = 0;

        while(1){
            dp[ arr[i] ][0] += 1;
            dp[ arr[i] ][1] += steps;
            steps++;

            if(dp[i][0] >= threshold){
                minOfAll = min(dp[arr[i]][1], minOfAll);
            }

            if(arr[i] == 0){
                break;
            }
            arr[i] /= d;
        }
    }
}


