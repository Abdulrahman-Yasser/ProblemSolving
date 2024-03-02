#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h> 


void my_sort(int* arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int maxPairs(int skillLevel_count, int* skillLevel, int minDiff){
    my_sort(skillLevel, skillLevel_count);

    int l = 0, r = (skillLevel_count / 2) + 1;
    bool good = true;

    while(r - l > 1){
        int m = (r + l) / 2;
        for(int i = 0; i < m; i++){
            good &= (abs(skillLevel[skillLevel_count - m + i] - skillLevel[i]) >= minDiff);
        }
        if(good){
            l = m;
        }else{
            r = m;
        }
        good = true;
    }
    return l;
}





int len = 6;
int a [] = {3, 4, 5, 2, 1, 1};
int mindif = 3;

int main(void){
printf("\n%d\n",maxPairs(len, a, mindif));
}