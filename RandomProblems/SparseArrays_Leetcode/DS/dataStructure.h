#include <stdio.h>
#include <stdint.h>
#include "stdlib.h"


typedef struct StringLinkedList_t StringLinkedList;

struct StringLinkedList_t{
    char* myString;
    StringLinkedList* next;
};


typedef struct Alphabet_HashTable_t Alphabet_HashTable;

struct Alphabet_HashTable_t{
    StringLinkedList* q[58];
};

void LL_add_element(StringLinkedList* my_LL, const char* string, int stringLength);
void LL_remove_element(StringLinkedList* my_LL, char* string);
char* LL_get_element(StringLinkedList* my_LL, char* string);
int LL_count_element(StringLinkedList* my_LL, char* string);


void HT_add_element(Alphabet_HashTable* my_HT, char* string, int stringLength);
void HT_remove_element(Alphabet_HashTable* my_HT, char* string);
char* HT_get_element(Alphabet_HashTable* my_HT, char* string);
int HT_count_element(Alphabet_HashTable* my_HT, char* string);
