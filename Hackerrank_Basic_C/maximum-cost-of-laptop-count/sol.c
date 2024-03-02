#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int min(int a, int b){
    return (a > b) ? a : b;
}


int maxCost(int cost_count, int *cost, int labels_count, char **labels, int dailyCount){

    int max_cost = 0, my_cost = 0, cnt = 0 ;
    bool day_flag = false;
    for(int i = 0; i < labels_count; i++){
        if(strcmp(labels[i], "legal") == 0){
            cnt++;
            if(cnt == dailyCount){
                day_flag = true;
            }
        }
        my_cost += cost[i];
        if(day_flag){
            max_cost = min(my_cost, max_cost);
            day_flag = false;
            cnt = 0;
            my_cost = 0;
        }
    }
    return max_cost;
}



int n = 5;
int costs[] = {0, 3, 2, 3, 4, 5};
char* labels[5] = {"legal", "legal", "illegal", "legal", "legal"};

int main()
{

	int result = maxCost(n, costs, n, labels, 1);

	printf("%d\n", result);

	// Free allocated memory

}