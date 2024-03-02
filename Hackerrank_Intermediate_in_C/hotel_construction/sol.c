#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>

#define  MAX_CITIES_CNT    (50)

char Hash_steps[MAX_CITIES_CNT][MAX_CITIES_CNT];

int min(int a, int b){
    int res = 0;
    if(a > b) 
        res = b;
    else
        res = a;
    return res;
}

void first_init_distance(int roads_rows, int roads_columns, int roads[][roads_columns], char Hash_steps[][MAX_CITIES_CNT]) {
    int i, j;
    for(i = 0; i < roads_rows; i++){
        Hash_steps[roads[i][1]][roads[i][0]] = 1;
        Hash_steps[roads[i][0]][roads[i][1]] = 1;
    }
}
 
void init_distance(int roads_rows, int roads_columns, int steps, int roads[][roads_columns], char Hash_steps[][MAX_CITIES_CNT]) {
    int i, j, k, comparing_row, adder;
    printf("Looking for %d\n", steps);
    for(i = 1; i < roads_rows; i++){
        for(j = 1; j < roads_rows; j++){
            if(i == j){
                continue;
            }
            if((Hash_steps[i][j] <= steps) && (Hash_steps[i][j] != 0)){
                adder = Hash_steps[i][j];
                comparing_row = j;
                for(k = 1; k < roads_rows; k++){
                    if(k == i || k == comparing_row){
                        continue;
                    }
                    if( (Hash_steps[comparing_row][k] <= steps) && (Hash_steps[comparing_row][k] != 0)){
                        if(Hash_steps[i][k] == 0){
                            Hash_steps[i][k] = Hash_steps[comparing_row][k] + adder;
                        }/*else{
                            Hash_steps[i][k] = min(Hash_steps[i][j] + adder, Hash_steps[i][k]);
                        }*/
                    }
                }
            }
        }
    }
}

void my_sort(char* arr, int len){
    int i, j, temp;
    for(i = 0; i < len; i++){
        for(j = i + 1; j < len; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void my_print(int roads_rows, int roads_columns, int roads[][MAX_CITIES_CNT]){
    int i, j;
    printf("\n");
    for(i = 0; i < roads_rows; i++){
        printf("%d row : ", i);
        for(j = 0; j < roads_rows; j++){
            printf("%d ", Hash_steps[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns], int threshold){
    int i, j, current_element, z, k, searching_in;
    roads_rows+=2;
    for(i = 0; i < roads_rows; i++){
        printf("{ %d , %d }- ", roads[i][0], roads[i][1]);
    }
    for(i = 0; i < roads_rows; i++){
        for(j = 0; j < roads_rows; j++){
            Hash_steps[i][j] = 0;
        }
    }

    first_init_distance(roads_rows, roads_columns, roads, Hash_steps);
    my_print(roads_rows, roads_columns, Hash_steps);

    for(i = 1; i < roads_rows; i++){
        init_distance(roads_rows, roads_columns, i, roads, Hash_steps);
        my_print(roads_rows, roads_columns, Hash_steps);
    }

    for(i = 0; i < roads_rows; i++){
        my_sort(Hash_steps[i], roads_rows);
    }

    printf("\nSorted");
    my_print(roads_rows, roads_columns, Hash_steps);

    int counter = 1, res = 1, sum = 0;
    for(i = 1; i < roads_rows; i++){
        for(j = i + 1; j < roads_rows; j++){
            for(k = 1; k < roads_rows; k++){
                if(Hash_steps[i][k] == Hash_steps[j][k]){
                    counter += 1;
                }
            }
            printf("Counter for %d : %d %d\n", j, counter, roads_rows);
            if(counter == roads_rows){
                res++;
            }
            counter = 1;
        }
        if(res == threshold){
            sum++;
        }
        res = 1;
    }

    return sum;
}


const int roads_rows = 6;
const int roads_columns = 2;
int roads[6][2] = {{1, 2},{2, 5},{3, 4},{4, 5},{5, 6},{7, 6}};

int main(void){
    printf("\n%d\n",numberOfWays(roads_rows, roads_columns, roads, 3));
} 
