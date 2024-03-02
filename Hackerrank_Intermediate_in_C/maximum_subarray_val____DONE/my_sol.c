#include <stdio.h>
#include <stdlib.h>

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

long maxSubarrayValue(int n, int* arr){

    long curr_max = 0;
    long curr_min = 0;
    long min_so_far = 0;
    long max_so_far = 0;

    for(int i = 1; i < n; i+=2){
        arr[i] = 0 - arr[i];
    }

    for(int i = 0; i < n; i++){
        curr_max = max(arr[i], arr[i] + curr_max);
        max_so_far = max(curr_max, max_so_far);

        if(arr[i] < 0){
            curr_min = min(arr[i] + curr_min, arr[i]);
        }else{
            curr_min = arr[i];
        }
        min_so_far = min(min_so_far, curr_min);
    }
    return (abs(min_so_far) > abs(max_so_far)) ? (abs(min_so_far) * abs(min_so_far)) : (abs(max_so_far) * abs(max_so_far));
}

int a[] = {-1, 2, 3, 4, -5};
int len = 5;

int main() {
    printf("\n%d\n", maxSubarrayValue( len, a));
    return 0;
}