#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>


long max(long a, long b){
    return (a > b) ? a : b;
}

long max(long a, long b){
    return (a < b) ? a : b;
}


long maxSubarrayValue(int n, int* arr){
    for(long i = 1; i < n; i+= 2){
        arr[i] = 0 - arr[i];
    }
    long maxCurr = arr[0];
    long maxOfAll = arr[0];
    long minCurr = arr[0];
    long minOfAll = arr[0];

    for(long i = 1; i< n; i++){
        maxCurr = max(arr[i] + maxCurr, arr[i]);
        maxOfAll = max(maxCurr, maxOfAll);
        if(arr[i] > 0){
            minCurr = 0;
        }else{
            minCurr += arr[i];
        }
        minOfAll = min(minOfAll, minCurr);
    }
    if(abs(minOfAll) > abs(maxOfAll)){
        return ( abs(minOfAll) * abs(minOfAll));
    }else{
        return ( abs(maxOfAll) * abs(maxOfAll));
    }
}


