#include <iostream>
#include <string>
#include "limits.h"
#include <cstring>
#include "stdlib.h"
#include <vector>

void count_sort(std::vector<std::string> &my_array)
{
    int max = INT_MIN, min = INT_MAX;
    std::vector<std::string> *freq_arr = new std::vector<std::string>[26 * 26];
    int c = 0;
    int j;
    for (auto i = my_array.begin(); i < my_array.end(); i++)
    {
        int pos = (i[0][1] - 'a') + (i[0][0] - 'a') * 26;
        freq_arr[ pos ].push_back(*i);
    }

    for (int j = 0; j < 26*26; j++)
    {
        if(freq_arr[j].size() == 0){
            continue;
        }
        for(auto i = freq_arr[j].begin(); i < freq_arr[j].end(); i++)
        {
            my_array[c] = *i;
            c++;
        }
    }
}

void printing(std::vector<std::string> my_array)
{
    for (auto i = my_array.cbegin(); i < my_array.cend(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> the_array = {"ana", "mohamed", "hossam", "ahmed", "kasem", "ali", "mahmoud"};
    count_sort(the_array);
    printing(the_array);
}