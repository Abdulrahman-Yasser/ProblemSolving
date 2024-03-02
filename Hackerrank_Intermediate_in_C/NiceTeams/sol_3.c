#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void my_sort(int* arr, int n){
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[i] = temp;
            }
        }
    }
}



int maxPairs(int skillLevel_count, int* skillLevel, int minDiff){
    my_sort(skillLevel, skillLevel_count);
    int r = (skillLevel_count / 2) + 1;
    int l = 0;
    int m = (r + l) / 2;
    while(r - l > 1){
        bool good = true;
        m = (r + l) / 2;
        for(int i = 0; i < skillLevel_count; i++){
            good &= (skillLevel[skillLevel_count - m + i] - skillLevel[i] >= minDiff);
        }
        if(good){
            l = m;
        }else{
            r = m;
        }
    }
    return l;
}



