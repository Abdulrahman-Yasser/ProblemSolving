#include <iostream>

void accumulate_arr(int arr[], int len){
    if(len <= 1){
        std::cout << arr[0] << " ";
        return ;
    }
    accumulate_arr(arr, len - 1);
    arr[len-1] = arr[len-1] + arr[len - 2];
    std::cout << arr[len - 1] << " ";
}

int main(){
    int a[] = {1, 8, 2, 10, 3};
    accumulate_arr(a, 5);
}