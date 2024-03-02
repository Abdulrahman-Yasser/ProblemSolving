#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char HashDistance[50][50];

int min(int a, int b){
    return (a > b) ? b : a;
}


void printDistance(int roads_rows, int roads_columns){
    for(int i = 1; i < roads_rows; i++){
        printf("\n");
        for(int j = 1; j < roads_rows; j++){
            printf("%d ", HashDistance[i][j]);
        }
    }
    printf("\n -========================= Done \n");
}


void first_InitDistance(int roads_rows, int roads_columns, int roads[][roads_columns]){
    for(int i = 0; i < roads_rows; i++){
        HashDistance[roads[i][1]][roads[i][0]] = 1;
        HashDistance[roads[i][0]][roads[i][1]] = 1;
    }
    printDistance(roads_rows, roads_columns);
}


void InitDistance(int roads_rows, int roads_columns, int roads[][roads_columns]){
    for(int i = 1; i < roads_rows; i++){
        for(int steps = 1; steps < roads_rows; steps++){
           for(int j = 1; j < roads_rows; j++){
                if(i == j){
                    continue;
                }
                if(HashDistance[i][j] == steps){
                    for(int z = 1; z < roads_rows; z++){
                        if(z == i || z == j){
                            continue;
                        }
                        if(HashDistance[j][z] == 1){
                            HashDistance[i][z] = min(steps + 1, HashDistance[i][z]);
                        }
                    }
                }
           }
        }
        printDistance(roads_rows, roads_columns);
    }
}


int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns], int threshold){
    for(int i = 0; i < roads_rows + 3; i++){
        for(int j = 0; j < roads_rows + 3; j++){
            HashDistance[i][j] = 99;
        }
    }
    roads_rows += 2;
    first_InitDistance(roads_rows, roads_columns, roads);
    InitDistance(roads_rows, roads_columns, roads);
    printDistance(roads_rows, roads_columns);

}




const int roads_rows = 6;
const int roads_columns = 2;
int roads[6][2] = {{1, 2},{2, 5},{3, 4},{4, 5},{5, 6},{7, 6}};

int main(void){
    printf("\n%d\n",numberOfWays(roads_rows, roads_columns, roads, 3));
} 
