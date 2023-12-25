#include <stdio.h>
#include <string.h>

#include "dataStructure.h"



void LL_add_element(StringLinkedList* my_LL, const char* string, int stringLength){
    if(my_LL == NULL){
        return;
    }

    StringLinkedList* ptr;
    StringLinkedList* new_element = (StringLinkedList*)malloc(sizeof(StringLinkedList));
    new_element->myString = (char*)malloc(sizeof(char) * stringLength);
    ptr = my_LL;

    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new_element;
    strcpy(new_element->myString, string);
    new_element->next = NULL;
}


void LL_remove_element(StringLinkedList* my_LL, char* string){
    if(my_LL == NULL){
        return;
    }

    StringLinkedList *ptr, *ptr_2;
    ptr = my_LL;

    while (ptr->next != NULL){
        if(!strcmp(ptr->myString, string)){
            // the strings matches
            if(ptr_2 == NULL){
                free(ptr);
            }else{
                ptr_2->next = ptr->next;
            }
            return;
        }
        ptr_2 = ptr;
        ptr = ptr->next;
    }

    if(!strcmp(ptr->myString, string)){
        // the strings matches
        if(ptr_2 == NULL){
            free(ptr);
        }else{
            ptr_2->next = NULL;
        }
        return;
    }
}

char* LL_get_element(StringLinkedList* my_LL, char* string){
    if(my_LL == NULL){
        return "\0";
    }
    StringLinkedList *ptr, *ptr_2;
    ptr = my_LL;

    while (ptr->next != NULL){
        if(!strcmp(ptr->myString, string)){
            // the strings matches
            return ptr->myString;
        }
        ptr = ptr->next;
    }

    if(!strcmp(ptr->myString, string)){
        // the strings matches
        return ptr->myString;
    }
}

int LL_count_element(StringLinkedList* my_LL, char* string){
    int c = 0;

    if(my_LL == NULL){
        return 0;
    }

    StringLinkedList *ptr, *ptr_2;
    ptr = my_LL;

    while (ptr->next != NULL){
        if(!strcmp(ptr->myString, string)){
            // the strings matches
            c++;
        }
        ptr = ptr->next;
    }

    if(!strcmp(ptr->myString, string)){
        // the strings matches
        c++;
    }
    return c;
}


void HT_add_element(Alphabet_HashTable* my_HT, char* string, int stringLength){
    if ( my_HT->q[ string[0] - 65 ] == NULL){
        my_HT->q[ string[0] - 65 ] = (StringLinkedList*)malloc(sizeof(StringLinkedList));
        my_HT->q[ string[0] - 65 ]->myString = (char*)malloc(sizeof(char) * stringLength);
        strcpy(my_HT->q[ string[0] - 65 ]->myString, string);
        my_HT->q[ string[0] - 65 ]->next = NULL;
    
        return;
    }
    LL_add_element(my_HT->q[ string[0] - 65 ], string, stringLength);
}

void HT_remove_element(Alphabet_HashTable* my_HT, char* string){
    if ( my_HT->q[ string[0] - 65 ] == NULL){
        return;
    }

    LL_remove_element(my_HT->q[ string[0] - 65 ], string);
}



char* HT_get_element(Alphabet_HashTable* my_HT, char* string){
    if ( my_HT->q[ string[0] - 65 ] == NULL){
        return "\0";
    }

    return LL_get_element(my_HT->q[ string[0] - 65 ], string);
}

int HT_count_element(Alphabet_HashTable* my_HT, char* string){
    if ( my_HT->q[ string[0] - 65 ] == NULL){
        return 0;
    }

    return LL_count_element(my_HT->q[ string[0] - 65 ], string);
}
