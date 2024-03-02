#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

long max(long a, long b){
    return (a > b) ? a : b;
}
long min(long a, long b){
    return (a < b) ? a : b;
}


long maxSubarrayValue(int n, int* arr)
{

    int my_max = arr[0];
    int maxOfAll = arr[0];
    int my_min = arr[0];
    int minOfAll = arr[0];


    for(int i = 0; i < n; i++){
        my_max = max(arr[i], arr[i] + my_max);
        maxOfAll = max(maxOfAll, my_max);

        if(arr[i] > 0){
            my_min = arr[i];
        }else{
            my_min = my_min + arr[i];
        }
        minOfAll = min(my_max, minOfAll);

    }
    
}


