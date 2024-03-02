#include <iostream>

int max(int a, int b){
    return (a > b) ? a : b;
}

float array_average(int arr[], int len){
    static int maxi = max(len, maxi);


    if(len == 1){
        return arr[0];
    }
    int result = array_average(arr, len - 1) + arr[len - 1];

    if(len == maxi){
        return (float)result / maxi;
    }
    return result;
}



int main(){
    int a[] = {1, 8, 2, 10, 3};
    std::cout << array_average(a, 5) << std::endl;
}