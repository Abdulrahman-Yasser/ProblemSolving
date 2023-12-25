#include <stdio.h>
#include <stdint.h>



typedef struct{
    char* data;
}word;

typedef struct{
    word* data;
    int word_count;//denotes number of words in a sentence
}sentence;

typedef struct{
    sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
}paragraph;

typedef struct{
    paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
}document;

word create_word(void);
sentence create_sentence(void);
paragraph create_paragraph(void);
document create_document(void);

void add_word_to_sentence(sentence* sentce, word* my_data);
void add_sentence_to_paragraph(paragraph* parag, sentence *data);
void add_paragraph_to_document(document* doc, paragraph* parag);
