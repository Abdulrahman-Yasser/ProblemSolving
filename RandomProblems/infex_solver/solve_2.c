#include <stdio.h>
#include <stdlib.h>


void switching(int* arr_1, int* arr_2, int n_of_ele, int start){
    int temp = 0;
    for(int i = start; i <= n_of_ele; i++){
        temp = arr_1[i];
        arr_1[i] = arr_2[i];
        arr_2[i] = temp;
    }
}

int is_it_equal(int* arr_1, int* arr_2, int n){
    int sum_1 = 0, sum_2 = 0;
    for(int i = 0; i < n; i++){
        sum_1 += arr_1[i];
        sum_2 += arr_2[i];
    }
    if(sum_1 == sum_2){
        return 1;
    }else{
        return 0;
    }
}

void printing(int* arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}


void solver(int *arr, int n){
    int* arr_1 = (int*)malloc(sizeof(int) * n/2);
    int* arr_2 = (int*)malloc(sizeof(int) * n/2);

    for(int i = 0; i < n/2; i++){
        arr_1[i] = arr[i];
    }
    for(int i = n/2, j = 0; i < n; i++, j++){
        arr_2[j] = arr[i];
    }

    printing(arr_1, n/2);
    printf("\n ");
    printing(arr_2, n/2);
    printf("\n ");



    if(is_it_equal(arr_1, arr_2, n/2)){
        printing(arr_1, n/2);
        printf("\n ");
        printing(arr_2, n/2);
    }

    for(int n_of_ele = 1; n_of_ele < n/2; n_of_ele++){
        for(int start = 0; start <= (n/2 - n_of_ele); start++){
            switching(arr_1, arr_2, n_of_ele, start);
            printing(arr_1, n/2);
            printf("\n ");
            printing(arr_2, n/2);
            printf("\n----------------------------------------");
            printf("\n ");
            if(is_it_equal(arr_1, arr_2, n/2)){
                printf("\n===============================\n");
                printing(arr_1, n/2);
                printf("\n ");
                printing(arr_2, n/2);
                printf("\n===============================\n");
                break;
            }
            switching(arr_1, arr_2, n_of_ele, start);
        }
    }
}



int main(){
    int arr[] = {16, 22, 35, 8, 20, 1, 21, 11};
    solver(arr, sizeof(arr) / sizeof(int));

}