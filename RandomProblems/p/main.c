#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char hashTables[26];

typedef struct tree_element_s tree_element_t;

int get_highest(void){
    int i = 0, result;
    for(i = 0; i < 26; i++){
        
    }
}

struct tree_element_s{
    char my_character;
    int children_sums;
    tree_element_t *Left;
    tree_element_t *Right;
};

tree_element_t* draw_my_tree(char* str, int sum){
    tree_element_t* root = malloc(sizeof(tree_element_t));
    root->children_sums = sum;
    root->my_character = 'ϕ';
    
}

int initializing(char* my_string){
    int i = 0;
    while(my_string[i] != '\0' || i < 25){
        hashTables[my_string[i]- 41]++;
        i++;
    }
    return i;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char my_string[25];
    int i = 0;

    fgets(my_string, 25, stdin);
    
    i = initializing(my_string);
    
    draw_my_tree(my_string, i);
        
    return 0;
}