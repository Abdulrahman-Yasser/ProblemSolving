#include <stdlib.h>
#include <stdio.h>

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

long maxSubarrayValue(int n, int* arr){

    for(int i = 1; i < n; i+=2){
        arr[i] = 0 - arr[i];
    }

    int max_curr = 0;
    int max_till_now = 0;
    int min_curr = 0;
    int min_till_now = 0;
    
    for(int i = 0; i < n; i++){
        max_curr = max(arr[i] + max_curr, arr[i]);
        max_till_now = max(max_till_now, max_curr);
        if(arr[i] > 0){
            min_curr = arr[i];
        }else{
            min_curr = min(min_curr + arr[i], arr[i]);
        }
        min_till_now = min(min_curr, min_till_now);
    }
    return (abs(min_till_now) > abs(max_till_now)) ? (abs(min_till_now) * abs(min_till_now)) : (abs(max_till_now) * abs(max_till_now));
}

int a[] = {-1, 2, 3, 4, -5};
int len = 5;

int main() {
    printf("\n%d\n", maxSubarrayValue( len, a));
    return 0;
}