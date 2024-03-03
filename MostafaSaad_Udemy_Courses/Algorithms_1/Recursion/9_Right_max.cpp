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
    int a[] = {1, 3, 5, 7, 4, 2};
    right_max(a, 6);
    for(int i = 0; i < 6; i++){
        std::cout << a[i] << " ";
    }
}