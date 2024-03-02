#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define  MAX_CITIES_CNT    (50)

char isThereRoad[MAX_CITIES_CNT][MAX_CITIES_CNT];
char distance[MAX_CITIES_CNT][MAX_CITIES_CNT];


void printDistance(int roads_rows){
    for(int i = 0; i < roads_rows; i++){
        printf("\n");
        for(int j = 0; j < roads_rows; j++){
            printf("%d ", distance[i][j]);
        }
    }
    printf("\n -========================= Done \n");
}

void printisThereRoad(int roads_rows){
    for(int i = 0; i < roads_rows; i++){
        printf("\n");
        for(int j = 0; j < roads_rows; j++){
            printf("%d ", isThereRoad[i][j]);
        }
    }
    printf("\n -========================= Done \n");
}



void init_distance(int src, int dist, int val, int cityCnt){
    distance[src][dist] = val;
    for(int nextDist = 0; nextDist < cityCnt; nextDist++){
        if(isThereRoad[dist][nextDist] && distance[src][nextDist] == -1){
            init_distance(src, nextDist, val+1, cityCnt);
        }
    }
}



int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns]){
    int i= 0;
    int cityCnt = roads_rows + 1;
    for(i = 0; i < cityCnt; i++){
        for(int j = 0; j < cityCnt; j++){
            isThereRoad[i][j] = 0;
            distance[i][j] = -1;
        }
    }
    for(i = 0; i < roads_rows; i++){
        isThereRoad[roads[i][0] - 1][roads[i][1] - 1] = 1;
        isThereRoad[roads[i][1] - 1][roads[i][0] - 1] = 1;
    }

    printDistance(cityCnt);
    printisThereRoad(cityCnt);

    for(i = 0; i < cityCnt; i++){
        init_distance(i, i, 0, cityCnt);
    }

    printDistance(cityCnt);


    int cnt = 0;

    for(int city_1 = 0; city_1 < cityCnt; city_1++){
        for(int city_2 = city_1 + 1; city_2 < cityCnt; city_2++){
            for(int city_3 = city_2 + 1; city_3 < cityCnt; city_3++){
                if(distance[city_1][city_2] == distance[city_1][city_3] && distance[city_1][city_2] == distance[city_3][city_2]){
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
