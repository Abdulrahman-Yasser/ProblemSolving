#include <iostream>
#include <string>
#include "limits.h"
#include <cstring>
#include "stdlib.h"
#include <vector>
#include <algorithm>
#include <stdbool.h>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void wiggleSort(std::vector<int> &nums)
{
    int min = INT_MAX;
    int j = 0;
    for(auto i = nums.begin(); i < nums.end() - 1; ++i, ++j){
        if(j % 2){
            if(*i <= *(i+1)){
                swap(*i, *(i+1));
            }
        }else{
            if(*i >= *(i+1)){
                swap(*i, *(i+1));
            }
        }
    }
}

void printing(std::vector<int> my_array)
{
    for (auto i = my_array.cbegin(); i < my_array.cend(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void printing(std::vector<std::vector<int>> my_array)
{
    for (auto i = my_array.begin(); i < my_array.end(); i++)
    {
        for (auto j = i->begin(); j < i->end(); j++)
        {
            std::cout << *j << " ";
        }
    }
    std::cout << std::endl;
}


int main()
{
    std::vector<int> the_array = {3, 5, 2, 1, 6, 4};
    wiggleSort(the_array);
    printing(the_array);
}