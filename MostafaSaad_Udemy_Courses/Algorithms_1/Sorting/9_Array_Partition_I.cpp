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

int arrayPairSum(std::vector<int> &nums)
{
    int sum = 0;
    std::sort(nums.begin(), nums.end(), compare);
    for(int i = 0; i < nums.size(); i+=2){
        sum += nums.at(i);
    }
    return sum;
}


int main()
{
    std::vector<int> the_array = {6, 2, 6, 5, 1, 2};
    auto res = arrayPairSum(the_array);
    std::cout << (res) << std::endl;
}