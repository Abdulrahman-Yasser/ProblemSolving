#include <stdlib.h>
#include <stdio.h>

#define MOD 1000000007

int setPassword(char* password){
    int p = 0;
    for(int i = 0; password[i]; i++){
        p *= 131;
        p %= MOD;
        p += password[i];
        p %= MOD;
    }
    return p;
}

int authorize(long correctHash, long inputHash){
    if(inputHash == correctHash){
        return 1;
    }

    for(int i = '0'; i <= '9'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    for(int i = 'A'; i <= 'Z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    return 0;
}

int *authEvents(int events_rows, int events_columns, char ***events, int *result_count){

}
