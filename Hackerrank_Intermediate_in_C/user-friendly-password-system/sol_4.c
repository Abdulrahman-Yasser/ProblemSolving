#define MOD 1000000007



int setPassword(char* password){
    int my_password = 0;
    for(int i = 0; password[i]; i++){
        my_password *= 131;
        my_password %= MOD;
        my_password += password[i];
        my_password %= MOD;
    }
    return my_password;
}



int authorize(long correctHash, long inputHash){
    if(correctHash == inputHash){
        return 1;
    }
    correctHash *= 131;
    correctHash %= MOD;

    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    for(int i = 'a'; i <= 'z'; i++){
        if((inputHash + i) % MOD == correctHash){
            return 1;
        }
    }
    return 0;

}