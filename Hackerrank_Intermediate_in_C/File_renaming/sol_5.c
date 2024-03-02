#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

#define MOD 1000000007

int temp[100000];
int acc[100000];


int solution(char* oldName, char* newName){
    int old_len = strlen(oldName);
    int new_len = strlen(newName);


    for(int i = 0; i < old_len; i++){
        temp[i] = 1;
    }

    for(int i = 1; i < new_len + 1; i++){

        for(int j = 0; j < old_len + 1; j++){
            acc[j] = 0;
        }

        for(int j = 1; j < old_len + 1; j++){
            acc[j] = acc[j - 1];
            if( newName[i - 1] == oldName[j - 1] ){
                acc[j] += temp[j - 1];
            }
        }

        for(int j = 0; j < old_len + 1; j++){
            temp[j] = acc[j];
        }
    }

    return temp[old_len] % MOD;

}



char* a = "ababa";
char* b = "aba";

int main(void){
    printf("%d\n",solution(a, b));
}



