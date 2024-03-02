#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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



void initDistance(int distance[MAX_CITIES_CNT][MAX_CITIES_CNT], int src, int des, int val, int citiesCnt, char isThereRoad[MAX_CITIES_CNT][MAX_CITIES_CNT]){
    distance[src][des] = val;
    for(int nextDes = 0; nextDes < citiesCnt; nextDes++){
        if(isThereRoad[des][nextDes] && distance[src][nextDes] == -1){
            initDistance(distance, src, nextDes, val + 1, citiesCnt, isThereRoad);
        }
    }
}



int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns]){
    int cityCnt = roads_rows + 1;
    char isThereRoad[MAX_CITIES_CNT][MAX_CITIES_CNT] = {0};

    for(int i = 0; i < roads_rows; i++){
        isThereRoad[roads[i][0] - 1][roads[i][1] - 1] = 1;
        isThereRoad[roads[i][1] - 1][roads[i][0] - 1] = 1;
    }


    int distance[MAX_CITIES_CNT][MAX_CITIES_CNT];
    for(int i = 0; i < cityCnt; i++){
        for(int j = 0; j < cityCnt; j++){
            distance[i][j] = -1;
        }
    }
    printDistance(cityCnt, roads_columns, distance);

    for(int src = 0; src < cityCnt; src++){
        initDistance(distance, src, src, 0, cityCnt, isThereRoad);
    }

    printDistance(cityCnt, roads_columns, distance);

    int cnt = 0;

    for (int city1 = 0; city1 < cityCnt; city1++){
        for (int city2 = city1 + 1; city2 < cityCnt; city2++){
            for (int city3 = city2 + 1; city3 < cityCnt; city3++){
                if (distance[city1][city2] == distance[city1][city3] && distance[city1][city2] == distance[city2][city3]){
                    printf("Row : %d and col %d = %d ||  Row %d and col %d = %d \n", city1, city2, distance[city1][city2], city1, city3, distance[city1][city3]);
                    printf("AND - Row : %d and col %d == Row %d and col %d = %d \n", city1, city2, city2, city3, distance[city2][city3]);
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
