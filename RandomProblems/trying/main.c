#include <stdio.h>

#include <stdint.h>

struct A{
    int q;
    char z;
};

struct A A1[5] = {
    {1, 'a'},
    {2, 'b'},
    {3, 'c'},
    {4, 'd'}
};

struct A A2 = {66, 'w'};


int main(){
    printf("%d", 1 % 10);
}