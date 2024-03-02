#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



#define MOD 1000000007

int temp[100000];
int occ[100000];

int solution(char* oldName, char* newName){
    int new_len = strlen(newName);
    int old_len = strlen(oldName);

    for(int i = 0; i < old_len; i++){
        occ[i] = 0;
        temp[i] = 1;
    }

    for(int i = 1; i < new_len + 1; i++){
        for(int j = 0; j < old_len + 1; j++){
            occ[j] = 0;
        }

        for(int j = 1; j < old_len + 1; j++){
            occ[j] = occ[j-1];
            if(newName[i-1] == oldName[j-1]){
                occ[j] += temp[j-1];
            }
        }

        for(int j = 0; j < old_len + 1; j++){
            temp[j] = occ[j];
        }

    }
    return temp[old_len] % MOD;
}


