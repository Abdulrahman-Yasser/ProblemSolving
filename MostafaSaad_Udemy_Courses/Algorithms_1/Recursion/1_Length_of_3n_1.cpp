#include <iostream>

int length_3n_plus_1(int n){
    if(n == 1){
        return 1;
    }

    if(n % 2 == 0){
        return length_3n_plus_1(n/2) + 1;
    }else{
        return length_3n_plus_1((n*3)+1) + 1;
    }
}



int main(){
    std::cout << length_3n_plus_1(6) << std::endl;
}