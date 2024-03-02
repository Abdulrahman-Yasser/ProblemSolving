#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


void my_sort(int* arr, int len){
    int i, j, temp;
    for(i = 0; i < len; i++){
        for(j = i + 1; j < len; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int solution(int* arr, int arr_count, int threshold, int d){
    int dp[200001][2] = {0};
    int minOperation = INT_MAX;

    my_sort(arr, arr_count);

    for(int i = 0; i < arr_count; i++){
        int steps = 0;
        while(1){
            int current_value = arr[i];
            dp[current_value][0] += 1;
            dp[current_value][1] += steps;

            if(dp[current_value][0] >= threshold){
                minOperation = ( minOperation <= dp[current_value][1] ) ? minOperation : dp[current_value][1];
            }
            if(current_value == 0){
                break;
            }
            arr[i] /= d;
            steps += 1;
        }
    }
    return minOperation;
}

int main(void){
}



