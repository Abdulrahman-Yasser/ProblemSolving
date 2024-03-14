#include <iostream>
#include <string>
#include "limits.h"
#include <cstring>
#include "stdlib.h"
#include <vector>
#include <algorithm>
#include <stdbool.h>

bool compare(int a, int b)
{
    return a < b;
}

std::vector<std::vector<int>> minimumAbsDifference(std::vector<int> &nums)
{
    std::vector<std::vector<int>> result;
    int min = INT_MAX;
    std::sort(nums.begin(), nums.end(), compare);
    for (auto i = nums.begin(); i < nums.end(); ++i)
    {
        if(abs(*i - *(i+1)) < min){
            min = abs(*i - *(i+1));
        }
    }

    for (auto i = nums.begin(); i < nums.end(); ++i)
    {
        if(abs(*i - *(i+1)) == min){
            std::vector<int> temp = {*i, *(i+1)};
            result.push_back(temp);
        }
    }


    std::cout << "Min is : " << min << std::endl;
    return result;
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
    std::vector<int> the_array = {10, 50, 21, 64, 12, 01, 14, 28};
    auto res = minimumAbsDifference(the_array);
    printing(res);
}