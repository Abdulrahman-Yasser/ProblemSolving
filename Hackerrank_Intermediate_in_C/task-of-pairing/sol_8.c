#include <stdlib.h>
#include <stdio.h>


long taskOfPairing(int freq_count, long* freq) {
    int rmnd = 0, rslt = 0;
    for(int i = 0; i < freq_count; i++){
        if(freq[i] == 0){
            rmnd = 0;
            continue;
        }
        freq[i] += rmnd;
        rslt += freq[i] / 2;
        rmnd = freq[i] % 2;
    }
    return rslt;
}