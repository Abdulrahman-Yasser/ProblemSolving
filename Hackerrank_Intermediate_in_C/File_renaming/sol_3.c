#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char temp[200001];
char acc[200001];

#define MOD 1000000007
int solution(char* old_name, char* new_name){
    char old_len = strlen(old_name);
    char new_len = strlen(new_name);

    for(int z = 0; z < old_len; z++){
        temp[z] = 1;
    }
    for(int i = 1; i < new_len + 1; i++){
        for(int z = 0; z < old_len + 1; z++){
            acc[z] = 0;
        }
        for(int j = 1; j < old_len + 1; j++){
            acc[j] = acc[j - 1];
            if(new_name[i-1] == old_name[j-1]){
                acc[j] += temp[j-1];
            }
        }
        for(int z = 0; z < old_len + 1; z++){
            temp[z] = acc[z];
        }
    }
    return temp[old_len] % MOD;
}

char* a = "ababa";
char* b = "aba";

int main(void){
    printf("%d\n",solution(a, b));
}



