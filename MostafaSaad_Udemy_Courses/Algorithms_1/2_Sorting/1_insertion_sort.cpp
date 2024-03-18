#include <iostream>
#include <string>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insert(int a[], int num, int pos){
    for(int i = num; i > pos; i--){
        swap(a[i], a[i-1]);
    }
}


/*
    Challenge : code must be only 3 operations
*/
// void insertion_sort(int a[], int num){
//     int i =0, j = 0;
//     for(i = 1; i < num ; i++){
//         for(j = i - 1; j >= 0 && a[i] < a[j]; j--);
//         if(i != j+1){
//             insert(a, i, j+1);
//         }
//     }
// }

void insertion_sort(int a[], int num){
    int i =0, j = 0;
    for(i = num - 2; i >= 0  ; i--){
        for(j = i + 1; j < num && a[i] > a[j]; j++);
        if(i != j-1){
            insert(a, i, j-1);
        }
    }
}


void printing(int a[], int num){
    for(int i = 0; i < num; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int a[] = {1, 5, 8, 4, 2, 1, 3, 1, 6};
    insertion_sort(a, 9);
    printing(a, 9);
}