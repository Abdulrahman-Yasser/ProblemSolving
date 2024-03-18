
#include <iostream>

int my_pow(int value, int p = 2){
    if(p == 0)
        return 1;
    if(p == 1)
        return value;
    return(my_pow(value, p-1) * value);
}


int main(){
    std::cout << my_pow(3, 3) << std::endl;
}