#include <iostream>
#include <math.h>
#include <string>
#include <stdbool.h>
#include <cstring>


int max(int a, int b){
    return (a > b)? a : b;
}


bool isPrime(int num, int end = 3){
    if(num <= 1 || num % 2 == 0){
        return false;
    }
    if(num == end){
        return true;
    }
    if(num % end == 0){
        return false;
    }
    return isPrime(num, end+1);
}



int Count_primes(int start, int end){
    if(start > end){
        return 0;
    }
    int result = Count_primes(start+1, end);
    if(isPrime(start)){
        result += 1;
    }
    return result;
}


int main(){
}