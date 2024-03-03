#include <iostream>

int max(int a, int b){
    return (a > b)? a : b;
}

int Prefix_sum(int arr[], int len, int num){
    if(len == 1){
        return arr[0];
    }
    int result = Prefix_sum(arr, len - 1, num);

    if((len - 1) >= num){
        return result;
    }
    result += arr[len - 1];
    return result;
}

int main(){
    int a[] = {1, 3, 4, 6, 7};
    std::cout << Prefix_sum(a, 5, 3) << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << a[i] << " ";
    }
}