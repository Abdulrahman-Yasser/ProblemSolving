#include <stdio.h>
#include <stdlib.h>


void my_sort(int *skillLevel,int skillLevel_count){
    int temp, i, j;
    for(i = 0; i < skillLevel_count; i++){
        for(j = i + 1; j < skillLevel_count; j++){
            if(skillLevel[i] < skillLevel[j]){
                temp = skillLevel[i];
                skillLevel[i] = skillLevel[j];
                skillLevel[j] = temp;
            }
        }
    }
}


int maxPairs(int skillLevel_count, int* skillLevel, int minDiff){
    my_sort(skillLevel, skillLevel_count);
    int i = 0, j = 1, cnt = 0;;
    while(j < skillLevel_count){
        if((skillLevel[i] - skillLevel[j]) == minDiff){
            cnt++;
            i++;
        }
        j++;
    }
    return cnt;
}



int len = 6;
int a [] = {3, 4, 5, 2, 1, 1};
int mindif = 3;

int main(void){
printf("\n%d\n",maxPairs(len, a, mindif));
}