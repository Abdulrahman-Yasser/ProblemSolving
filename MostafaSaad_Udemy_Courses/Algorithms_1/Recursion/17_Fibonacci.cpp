#include <iostream>
#include <math.h>
#include <string>
#include <stdbool.h>
#include <cstring>
int max(int a, int b){
    return (a > b)? a : b;
}

int arr[100] = {};

int fibonacci(int n){
    if(n <= 1){
        return 1;
    }
    if(arr[n] == 0){
        arr[n] = fibonacci(n-2) + fibonacci(n-1);
    }
    return arr[n];
}

int main(){
    std::cout << fibonacci(40) << std::endl;
}