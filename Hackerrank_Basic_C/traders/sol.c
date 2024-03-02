#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int compare(const void *a, const void *b)
{
	return strcmp(*(const char **)a, *(const char **)b);
}



// int compare_2(const void *a, const void *b)
// {
// 	return (a > b) : a ? b;
// }



void print(char** customers, int customers_count){
    for(int i = 0; i < customers_count; i++){
        printf("%s \n", customers[i]);
    }
}


int mostActive(int customers_count, char **customers, int *result_count){
    qsort(customers, customers_count, sizeof(char*), compare);
    print(customers, customers_count);

    int i = 0, j = 0, cnt = 0, one_ele_freq = 1;
    int* result = (int*)malloc(sizeof(int) * 23);
    while(i < customers_count - 1){
        if(strcmp(customers[i], customers[i+1]) != 0){
            if(one_ele_freq >= (float)((float)customers_count * 0.05)){
                printf("\n%s\n", customers[i]);
                result[cnt] = one_ele_freq;
                cnt++;
            }
            one_ele_freq = 0;
        }
        one_ele_freq++;
        i++;
    }
    if(one_ele_freq >= (float)((float)customers_count * 0.05)){
        printf("\n%s\n", customers[i - 1]);
        result[cnt] = one_ele_freq;
        cnt++;
    }
    *result_count = cnt;
    return cnt;
}



int n = 21;
char* my_chars[] = {"Alpha", "Beta" ,"Zeta" ,"Beta", "Zeta", "Zeta", "Epsilon" ,"Beta" ,"Zeta" ,"Beta" ,"Zeta" ,"Beta" ,"Delta" ,"Zeta" ,"Beta" ,"Zeta" ,"Beta" ,"Zeta" ,"Beta" ,"Zeta" ,"Beta"};

int main()
{
    printf("%d", mostActive(n, my_chars,&n));
	return 0;
}