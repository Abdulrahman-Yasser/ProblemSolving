#include <iostream>
#include <string>
#include "limits.h"



/*
    Challenge : code must be only 3 operations
*/
void count_sort(int a[], int num){
    int max = INT_MIN, min = INT_MAX;
    int whole_size;
    int* freq_arr;
    int i, j;
    int c = 0;

    for(i =0; i < num; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    
    if(min < 0){
        min = abs(min);
    }else{
        min = 0;
    }

    max = abs(max);
    whole_size = max + min;

    freq_arr = new int[whole_size];

    for(i = 0; i < num ; i++){
        freq_arr[ a[i] + min ] += 1;
    }

    for(i = 0; i < whole_size; i++){
        for(j = freq_arr[i]; j > 0; j++){
            a[c] = i - min;
            c++;
        }
    }
}

void printing(int a[], int num){
    for(int i = 0; i < num; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int a[] = {1, 5, 8, 4, 2, 1, 3, 6};
    count_sort(a, 8);
    printing(a, 8);
}