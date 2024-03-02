#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


#define MAX_OF_CITIES 50

int Hash_distance[MAX_OF_CITIES][MAX_OF_CITIES];

int IsThereRoad[MAX_OF_CITIES][MAX_OF_CITIES];




void printDistance(int roads_rows, int roads_columns, int HashDistance[MAX_OF_CITIES][MAX_OF_CITIES]){
    for(int i = 0; i < roads_rows; i++){
        printf("\n");
        for(int j = 0; j < roads_rows; j++){
            printf("%d ", HashDistance[i][j]);
        }
    }
    printf("\n -========================= Done \n");
}


void init_distance(int distance[MAX_OF_CITIES][MAX_OF_CITIES], int src, int dest, int val, int city_cnt, int isThereRoad[MAX_OF_CITIES][MAX_OF_CITIES]){
    distance[src][dest] = val;
    for(int nextDest = 0; nextDest < city_cnt; nextDest++){
        if( isThereRoad[dest][nextDest] && distance[src][nextDest] == -1){
            init_distance(distance, src, nextDest, val + 1, city_cnt, isThereRoad);
        }
    }
}


int numberOfWays(int roads_rows, int roads_columns, int roads[][roads_columns]){

    int city_cnt = roads_rows+1;

    for(int i = 0; i < city_cnt; i++){
        for(int j = 0; j < city_cnt; j++){
            IsThereRoad[i][j] = 0;
        }
    }

    for(int i = 0; i < roads_rows; i++){
        IsThereRoad[roads[i][0] - 1][roads[i][1] - 1] = 1;
        IsThereRoad[roads[i][1] - 1][roads[i][0] - 1] = 1;
    }
    
    for(int i = 0; i < city_cnt; i++){
        for(int j = 0; j < city_cnt; j++){
            Hash_distance[i][j] = -1;
        }
    }

    for(int i = 0; i < city_cnt; i++){
        init_distance(Hash_distance, i, i, 0, city_cnt, IsThereRoad);
    }

    printDistance(city_cnt, 2, Hash_distance);

    int cnt = 0;
    for(int city_1 = 0; city_1 < city_cnt; city_1++){
        for(int city_2 = city_1 + 1; city_2 < city_cnt; city_2++){
            for(int city_3 = city_2 + 1; city_3 < city_cnt; city_3++){
                if(Hash_distance[city_1][city_2] == Hash_distance[city_1][city_3] && Hash_distance[city_1][city_2] == Hash_distance[city_3][city_2])
                cnt++;
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
