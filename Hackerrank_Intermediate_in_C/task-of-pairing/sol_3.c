#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



long taskOfPairing(int freq_count, long* freq) {
    long sum = 0;
    char prevRem = 0;
    for(int i = 0; i < freq_count; i++){
        freq[i] += prevRem;
        if(freq[i] == 0){
            prevRem = 0;
        }else if(freq[i] % 2){
            prevRem = 1;
        }else{
            prevRem = 0;
        }
        sum += freq[i] / 2;

    }

}

