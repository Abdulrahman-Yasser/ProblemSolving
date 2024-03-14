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

int largestPerimeter(std::vector<int> &nums)
{
    int max = 0;
    std::sort(nums.begin(), nums.end(), compare);
    for (auto i = nums.end() - 3; i >= nums.begin() ; --i)
    {
        if((*i + *(i+1) + *(i+2)) > max && (*i + *(i+1)) > *(i+2)){
            max = (*i + *(i+1) + *(i+2));
        }
    }

    return max;
}


int main()
{
    std::vector<int> the_array = {1,2,1,10};
    int res = largestPerimeter(the_array);
    std::cout << res << std::endl;
}