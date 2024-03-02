#include <iostream>

int sum(int arr[], int len){
    if(len == 1){
        return arr[0];
    }
    int result = sum(arr, len - 1);
    return result + arr[len - 1];
}



int main(){
    int a[] = {1, 8, 2, 10, 3};
    std::cout << sum(a, 5) << std::endl;
}