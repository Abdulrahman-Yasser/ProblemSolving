#include <iostream>

void array_increment(int arr[], int len){
    if(len <= 0){
        return ;
    }
    array_increment(arr, len - 1);
    arr[len-1] = arr[len-1] + len-1;
    std::cout << arr[len-1] << " ";

}

int main(){
    int a[] = {1, 5, 9, 3, 4, 23};
    array_increment(a, 6);
}