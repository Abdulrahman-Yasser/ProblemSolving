#include "Solution.h"


word create_word(void);
sentence create_sentence(void);
paragraph create_paragraph(void);
document create_document(void);


void add_word_to_sentence(sentence* sentce, word* my_data){
    word* ptr = sentce->data + sentce->word_count;
    word** p_ptr = &ptr;
    *p_ptr = my_data;
    sentce->word_count++;
}

void add_sentence_to_paragraph(paragraph* parag, sentence *data){
    sentence* ptr = parag->data + parag->sentence_count;
    sentence** p_ptr = &ptr;
    *p_ptr = data;
    parag->sentence_count++;
}

void add_paragraph_to_document(document* doc, paragraph* parag){
    paragraph* ptr = doc->data + doc->paragraph_count;
    paragraph** p_ptr = &ptr;
    *p_ptr = parag;
    doc->paragraph_count++;
}
