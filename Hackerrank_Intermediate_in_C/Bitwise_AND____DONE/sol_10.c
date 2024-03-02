
#include <stdbool.h>

bool isPowerOfTwo(int n){
	return (n != 0) && ((n & (n - 1)) == 0);
}

long sumOfSortedArray(int n){
	return ((long)n * (n + 1)) / 2;
}

long countPairs(int arr_count, int *arr){
	int freqDictSize = 4096; // Size of the frequency dictionary for numbers up to 2^12
	int *freqDict = (int *)calloc(freqDictSize, sizeof(int));
	for (int i = 0; i < arr_count; i++){
		freqDict[arr[i]]++;
    }
	long counterOfPairs = 0;
	for (int i = 0; i < freqDictSize; i++){
		if (freqDict[i] == 0){
			continue;
        }
		for (int j = i; j < freqDictSize; j++){
			if (freqDict[j] == 0){
				continue;
            }

			if (isPowerOfTwo(i & j)){
				if (i == j){
					counterOfPairs += sumOfSortedArray(freqDict[i] - 1);
                }else{
					counterOfPairs += freqDict[i] * freqDict[j];
                }
			}
		}
	}

	return counterOfPairs;
}
