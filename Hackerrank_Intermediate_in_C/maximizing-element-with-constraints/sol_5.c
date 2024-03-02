
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int maxElement(int n, int maxSum, int k){
    int l = k, r = k, limitRight = n - 1, count = 1;
    while(n <= maxSum && (l > 0 || r < limitRight)){
        n += r - l + 1;
        if(l > 0){
            l--;
        }
        if(r < limitRight){
            r++;
        }
        count++;
    }
    if(n < maxSum){
        count += (maxSum - n)/(r-l + 1) + 1;
    }

    return count - 1;

}



	int n = 3;
	int maxSum = 7;
	int k = 1;
	
	int main()
	{
	
	    int result = maxElement(n, maxSum, k);
	    printf("%d\n", result);
	
	    return 0;
	}