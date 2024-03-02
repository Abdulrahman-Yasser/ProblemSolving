#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 100000000

long temp[1000000];
long acc[1000000]; 




int sol(char* old_name, char* new_name){
    int old_len = strlen(old_name);
    int new_len = strlen(new_name);

    for(int z = 0; z < old_len + 1; z++){
        temp[z] = 1;
    }

    for(int i = 1; i < new_len + 1; i++){
        for(int z = 0; z < old_len + 1; z++){
            acc[z] = 0;
        }

        for(int j = i; j < old_len + 1; j++){
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