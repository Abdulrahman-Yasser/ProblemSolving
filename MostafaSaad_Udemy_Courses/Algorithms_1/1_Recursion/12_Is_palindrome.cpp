#include <iostream>
#include <math.h>

int max(int a, int b){
    return (a > b)? a : b;
}

int Is_palindrome(int arr[], int len, int i){
    if(len % 2 == 0){
        return 1;
    }
    if(len/2 == i){
        return 0;
    }
    int result = Is_palindrome(arr, len, i+1);
    return result + abs(arr[len - i - 1] - arr[i]);
}

int main(){
    int a[] = {1, 2, 3, 2, 1};
    std::cout << Is_palindrome(a, 5, 0) << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << a[i] << " ";
    }
}