#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MOD 1000000007

int setPassword(char* password){
    int my_password = 0;
    int n = strlen(password);
    for(int i = 0; i < n; i++){
        my_password *= 131;
        my_password %= MOD;
        my_password += password[i];
        my_password %= MOD;
    }
    return my_password;
}


int authorize(long correctHash, long inputHash){
    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }


    for(int i = '0'; i <= '9'; i++){
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
