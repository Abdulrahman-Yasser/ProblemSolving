#include <stdio.h>
#include <stdlib.h>

long taskOfPairing(int freq_count, long* freq) {
    int prvRmnd = 0, TotalSum = 0;
    for(int i = 0; i < freq_count; i++){
        if(freq[i] == 0){
            prvRmnd = 0;
            continue;
        }
        freq[i] += prvRmnd;
        TotalSum += freq[i] / 2;
        prvRmnd = freq[i] % 2;
    }
    return TotalSum;
}