#include <iostream>

int max(int a, int b){
    return (a > b)? a : b;
}

void left_max(int arr[], int len){
    static int maxi = 0, pos = 0;
    if(len == 1){
        std::cout << arr[0] << " ";
        return;
    }

    if(maxi < arr[len - 1]){
        maxi = arr[len-1];
        pos = len - 1;
    }
    
    left_max(arr, len - 1);
    if((len-1) > pos){
        arr[len-1] = maxi;
    }
    std::cout << arr[len - 1] << " ";
}

int main(){
    int a[] = {1, 3, 5, 7, 4, 2};
    left_max(a, 6);
}