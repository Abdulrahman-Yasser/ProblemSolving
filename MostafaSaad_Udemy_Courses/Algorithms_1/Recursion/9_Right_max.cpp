#include <iostream>

int max(int a, int b){
    return (a > b)? a : b;
}

void right_max(int arr[], int len){
    static int maxi = 0, pos = 0;
    if(len == 1){
        return;
    }

    
    arr[len-2] = max(arr[len-2], arr[len-1]);
    right_max(arr, len - 1);
}

int main(){
    int a[] = {1, 8, 2, 10, 3};
    right_max(a, 5);
    for(int i = 0; i < 5; i++){
        std::cout << a[i] << " ";
    }
}