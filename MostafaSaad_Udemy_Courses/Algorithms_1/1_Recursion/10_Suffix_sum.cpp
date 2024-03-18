#include <iostream>

int max(int a, int b){
    return (a > b)? a : b;
}

int Suffix_sum(int arr[], int len, int num){
    if(num == 0){
        return 0;
    }

    int result = Suffix_sum(arr, len - 1, num - 1);
    result += arr[len - 1];
    return result;
}

int main(){
    int a[] = {1, 3, 4, 6, 7};
    std::cout << Suffix_sum(a, 5, 3) << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << a[i] << " ";
    }
}