#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



long taskOfPairing(int freq_count, long* freq) {
    char Remain = 0;
    int sum = 0;
    for(int i = 0; i < freq_count; i++){
        if(freq[i] == 0){
            Remain = 0;
        }else{
            freq[i] += Remain;
            sum += (freq[i] / 2);
            Remain = freq[i] % 2;
        }

    }

}