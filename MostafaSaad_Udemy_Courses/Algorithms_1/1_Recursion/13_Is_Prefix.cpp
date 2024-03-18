#include <iostream>
#include <math.h>
#include <string>
#include <stdbool.h>
#include <cstring>
int max(int a, int b){
    return (a > b)? a : b;
}

bool Is_prefix(std::string main_string, std::string sec_string, int start_pos = 0){
    if(start_pos == 0){
        return true;
    }
    bool result = Is_prefix(main_string, sec_string, start_pos-1);
    return (main_string[start_pos - 1] - sec_string[start_pos - 1] == 0) ? result & true : false;
}

int main(){
    std::string main_string = "abcdefghi";
    std::string sec_string = "abcd";
    std::cout << Is_prefix(main_string, sec_string, sec_string.length()) << std::endl;
}