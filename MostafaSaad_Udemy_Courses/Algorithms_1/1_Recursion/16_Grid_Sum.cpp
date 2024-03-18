#include <iostream>
#include <math.h>
#include <string>
#include <stdbool.h>
#include <cstring>
int max(int a, int b){
    return (a > b)? a : b;
}

int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS){
    int result;
    if(col+1 > COLS){
        return 0;
    }
    if(grid[row][col] > grid[row][col+1] && grid[row][col] > grid[row+1][col]){
        result = grid[row][col] + path_sum(grid, row, col, ROWS, COLS);
    }else if(grid[row+1][col] > grid[row][col+1] && grid[row+1][col] > grid[row][col]){
        result = grid[row+1][col] + path_sum(grid, row+1, col, ROWS, COLS);
    }else if(grid[row][col+1] > grid[row+1][col] && grid[row][col+1] > grid[row][col]){
        result = grid[row][col+1] + path_sum(grid, row, col+1, ROWS, COLS);
    }
    return result;
}

int main(){
    
}