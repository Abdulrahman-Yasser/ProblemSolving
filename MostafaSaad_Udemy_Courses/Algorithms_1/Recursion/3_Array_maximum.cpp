
#include <iostream>

int max(int a, int b){
    return (a > b) ? a : b;
}


int arr_max(int arr[], int len){
    if(len == 1){
        return arr[0];
    }
    int result = arr_max(arr, len-1);
    return max(result, arr[len-1]);
}


int main(){
    int a[] = {25, 8, 5, 10, 23, 29};
    std::cout << arr_max(a, 6) << std::endl;
}