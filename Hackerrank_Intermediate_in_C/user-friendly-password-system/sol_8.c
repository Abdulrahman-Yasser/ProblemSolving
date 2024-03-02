#include <stdlib.h>
#include <stdio.h>


#define p 131
#define MOD 1000000007

int setPassword(char* password){
    int pass = 0;
    for(int i = 0; password[i]; i++){
        pass *= 131;
        pass %= MOD;
        pass += password[i];
        pass %= MOD;
    }
    return pass;
}

int authorize(long correctHash, long inputHash){

    if(inputHash == correctHash){
        return 1;
    }

    correctHash *= p;
    correctHash %= MOD;

    for(int i = 'a'; i <= 'z'; i++){
        if((correctHash + i) % MOD == inputHash){
            return 1;
        }
    }

    for(int i = '1'; i <= '9'; i++){
        if((correctHash + i) % MOD == inputHash){
            return 1;
        }
    }

    for(int i = 'A'; i <= 'Z'; i++){
        if((correctHash + i) % MOD == inputHash){
            return 1;
        }
    }
    return 0;
}

int *authEvents(int events_rows, int events_columns, char ***events, int *result_count){
    int* my_rslt = (int*)malloc(sizeof(int) * events_rows);
    int id = 0;
    int curr_Pass;
    for(int i = 0; i < events_rows; i++){
        switch(events[i][0][0]){
            case 's':
                curr_Pass = setPassword(events[i][1]);
                break;
            case 'a':
                my_rslt[id] = authorize(curr_Pass, atoi(events[i][1]));
                id++;
                break;
        }
    }
    *result_count = id;
    return my_rslt;
}