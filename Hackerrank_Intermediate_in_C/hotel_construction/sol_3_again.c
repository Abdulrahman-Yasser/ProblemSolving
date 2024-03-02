#include <stdio.h>
#include <stdlib.h>


#define MAX_CITIES_CNT 50


void printDistance(int roads_rows, int roads_columns, int HashDistance[MAX_CITIES_CNT][MAX_CITIES_CNT]){
    for(int i = 0; i < roads_rows; i++){
        printf("\n");
        for(int j = 0; j < roads_rows; j++){
            printf("%d ", HashDistance[i][j]);
        }
    }
    printf("\n -========================= Done \n");
}


void init_distance(int distance[MAX_CITIES_CNT][MAX_CITIES_CNT], int src, int dest, int val, int cityCnt, int isThereRoad[MAX_CITIES_CNT][MAX_CITIES_CNT]){
    distance[src][dest] = val;
    for(int nextDest = 0; nextDest < cityCnt; nextDest++){
        if((isThereRoad[dest][nextDest]) && distance[src][nextDest] == -1)
            init_distance(distance, src, nextDest, val + 1, cityCnt, isThereRoad);
    }
}


int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns]){
    int isThereRoad[MAX_CITIES_CNT][MAX_CITIES_CNT] = {0};
    int cityCnt = roads_rows + 1;
    for(int i = 0; i < roads_rows; i++){
        isThereRoad[roads[i][0] - 1][roads[i][1] - 1] = 1;
        isThereRoad[roads[i][1] - 1][roads[i][0] - 1] = 1;
    }
    printDistance(roads_rows, roads_columns, isThereRoad);

    int distance[MAX_CITIES_CNT][MAX_CITIES_CNT];
    for(int i = 0; i < cityCnt; i++){
        for(int j = 0; j < cityCnt; j++){
            distance[i][j] = -1;
        }
    }
    printDistance(cityCnt, roads_columns, distance);
    
    for(int src = 0; src < cityCnt; src++){
        init_distance(distance, src, src, 0, cityCnt, isThereRoad);
    }
    printDistance(cityCnt, roads_columns, distance);

    int cnt = 0;
    for(int city1 = 0; city1 < cityCnt; city1++){
        for(int city2 = city1 + 1; city2 < cityCnt; city2++){
            for(int city3 = city2 + 1; city3 < cityCnt; city3++){
                if(distance[city1][city2] == distance[city1][city3] && distance[city1][city2] == distance[city3][city2]){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}










// const int roads_rows = 4;
// const int roads_columns = 2;
// int roads[4][2] = {{1, 2},{1, 3},{1, 4},{1, 5}};


const int roads_rows = 6;
const int roads_columns = 2;
int roads[6][2] = {{1, 2},{2, 5},{3, 4},{4, 5},{5, 6},{7, 6}};
int main(void){
    printf("\n%d\n",numberOfWays(roads_rows, roads_columns, roads));
} 
