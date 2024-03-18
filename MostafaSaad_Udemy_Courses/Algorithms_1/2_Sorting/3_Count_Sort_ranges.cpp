#include <iostream>
#include <string>
#include "limits.h"
#include "stdlib.h"


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
    
    whole_size = max - min + 1;


    freq_arr = (int*)calloc(whole_size, sizeof(int));

    for(i = 0; i < num ; i++){
        freq_arr[ a[i] - min ] += 1;
    }

    for(i = 0; i < whole_size; i++){
        for(j = freq_arr[i]; j > 0; j--){
            a[c] = i + min;
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
    int a[] = {10123540, 10123545, 10123541, 10123549, 10123548, 10123547, 10123542, 10123540, 10123540, 10123546};
    count_sort(a, 10);
    printing(a, 10);
}