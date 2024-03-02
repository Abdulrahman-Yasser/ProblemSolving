#include <stdlib.h>
#include <stdio.h>

long taskOfPairing(int freq_count, long* freq) {
    long pairsCnt = 0;
    long prevRemainder = 0;

    for (int i = 0; i < freq_count; i++) {
        if (freq[i] == 0) {
            prevRemainder = 0;
            continue;
        }

        freq[i] += prevRemainder;
        pairsCnt += freq[i] / 2;
        prevRemainder = freq[i] % 2;
    }

    return pairsCnt;
}
