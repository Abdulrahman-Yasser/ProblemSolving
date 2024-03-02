#include <stdlib.h>
#include <stdio.h>

int a[] = {
    0,
    2,
    4
};

int solution(int* arr, int len){
    int i, j, temp = 0, cnt = 0;
    for(i = 0; i < len; i++){
        if(arr[i] == 0){
            continue;
        }
        for(j = i + 1; j < len; j++){
            temp = arr[i] & arr[j];
            if( temp == 1 ){
                cnt++;
            }else if((temp % 2) || temp == 0){
                continue;
            }else if(!((temp / 2) % 2)){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(void){
    printf("%d \n", solution(a, (sizeof(a) / sizeof(int))));
}



