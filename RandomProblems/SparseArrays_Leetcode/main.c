#include "DS/dataStructure.h"

int main(){
    int i;
    int number_of_elements;

    Alphabet_HashTable *my_hash_table = malloc(sizeof(Alphabet_HashTable));

    for (int i = 0; i < 58; i++) {
        my_hash_table->q[i] = NULL;
    }


    char *line = NULL;
    size_t len = 0;


    scanf("%d", &number_of_elements);
    
    for(i = 0; i < number_of_elements; i++){
        getline(&line, &len);
        HT_add_element(my_hash_table, line, sizeof(len));
        puts(line);
    }

    HT_add_element(my_hash_table, "xom", sizeof("xom"));
    HT_add_element(my_hash_table, "Amasterdam", sizeof("Amasterdam"));
    HT_add_element(my_hash_table, "xom", sizeof("xom"));
    HT_add_element(my_hash_table, "ana", sizeof("ana"));
    HT_add_element(my_hash_table, "xom", sizeof("xom"));
    HT_add_element(my_hash_table, "zinhom", sizeof("Amasterdam"));
    HT_add_element(my_hash_table, "xom", sizeof("xom"));

    printf("\n %d \n", HT_count_element(my_hash_table, "Amasterdam"));
}