#include <stdlib.h>
#include <stdio.h>


#define P 131
#define MOD 1000000007


int setPassword(char* password){
    int my_password = 0;
    int i  = 0;
    while(password[i]){
        my_password *= 131;
        my_password %= MOD;
        my_password += password[i];
        my_password %= MOD;
        i++;
    }
    return my_password;

}
int authorize(long correctHash, long inputHash){
    if(correctHash == inputHash){
        return 1;
    }

    inputHash *= P;
    inputHash %= MOD;

    for(int i = 'A'; i <= 'Z'; i++){
        if((inputHash + i) % MOD == correctHash ){
            return 1;
        }
    }

    for(int i = '0'; i <= '9'; i++){
        if((inputHash + i) % MOD == correctHash ){
            return 1;
        }
    }

    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash ){
            return 1;
        }
    }

    return 0;
}




 

int *authEvents(int events_rows, int events_columns, char ***events, int *result_count){
    int* res = (int*)malloc(events_rows * sizeof(int));
    int  resIdx = 0;
    int  currHash;
    for (int i = 0; i < events_rows; i++){
        switch (events[i][0][0]){
            case 's':
                currHash = setPassword(events[i][1]);
            break;
            case 'a':
                res[resIdx] = authorize(currHash, atoi(events[i][1]));
                resIdx++;
            break;
        }
    }
    *result_count = resIdx;
    return res;
}

 