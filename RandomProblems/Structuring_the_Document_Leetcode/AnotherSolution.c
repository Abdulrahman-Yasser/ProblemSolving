#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};

int word_length = 0, word_tracker = 0, sentence_tracker = 0, parag_tracker = 0;
int words[500];
int words_length_arr[500];
int sentences[250];
int paragraphs[5];
char* general_text;


void add_word_to_sentence(struct sentence* sentce,char* my_data, int length){
    struct word* newWord = malloc(sizeof(struct word));
    newWord->data = malloc(sizeof(char) * (length+2));


    strncpy(newWord->data, my_data, length);
    newWord->data[length+1] = '\0';

    struct word* ptr = sentce->data + sentce->word_count;
    struct word** p_ptr = &ptr;
    *p_ptr = newWord;

    sentce->word_count++;
}

void add_sentence_to_paragraph(struct paragraph* parag, struct sentence *data){
    struct sentence* ptr = parag->data + parag->sentence_count;
    struct sentence** p_ptr = &ptr;
    *p_ptr = data;
    parag->sentence_count++;
}

void add_paragraph_to_document(struct document* doc,struct  paragraph* parag){
    struct paragraph* ptr = doc->data + doc->paragraph_count;
    struct paragraph** p_ptr = &ptr;
    *p_ptr = parag;
    doc->paragraph_count++;
}

struct document get_document(char* text) {
    struct document result;
    int i = 0;
    int pushed_flag = 0;
    general_text = text;
    words[word_tracker] = 0;
    sentences[sentence_tracker] = 0;
    paragraphs[parag_tracker] = 0;


    while(text[i] != '\0'){
        switch(text[i]){
            case ' ':
                if(pushed_flag == 1){
                    pushed_flag = 0;
                    words[word_tracker] = i+1;
                    break;
                }
                words_length_arr[word_tracker] = i - words[word_tracker];

                word_tracker++;
                words[word_tracker] = i+1;
                break;
            case '.':
                pushed_flag = 1;

                words_length_arr[word_tracker] = i - words[word_tracker];

                word_tracker++;
                
                sentence_tracker++;
                sentences[sentence_tracker] = i + 1;
                
                break;
            case '\n':
                words[word_tracker] = i+1;
                pushed_flag = 0;
                
            
                parag_tracker++;
                paragraphs[parag_tracker] = sentence_tracker;
                break;
            default:
                break;
        }
    }
    return result;
}



// struct document get_document(char* text) {
//     struct document result;
//     result.data = malloc(sizeof(struct paragraph)*5);
//     result.data->data = malloc(sizeof(struct sentence)*250);
//     result.data->data->data = malloc(sizeof(struct word)*500);
    
//     int i = 0, word_length = 0;
//     int pushed_flag = 0;
//     while(text[i] != '\0'){
//         switch(text[i]){
//             case ' ':
//                 if(pushed_flag == 1){
//                     pushed_flag = 0;
//                     word_length = i;
//                     break;
//                 }
//                 add_word_to_sentence(result.data->data + result.data->sentence_count, (char*)text + i - 1, i - word_length - 1);
//                 word_length = i;
//                 break;
//             case '.':
//                 add_word_to_sentence(result.data->data + result.data->sentence_count, (char*)text + i - 1, i - word_length - 1);
//                 add_sentence_to_paragraph(result.data + result.paragraph_count, result.data->data );
//                 pushed_flag = 1;
//                 break;
//             case '\n':
//                 add_paragraph_to_document(&result, result.data + result.paragraph_count);
//                 break;
//             default:
//                 break;
//         }
//     }
// }

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    struct paragraph result;
    result.data = malloc(sizeof(struct sentence));
    
    result.data->data = malloc(sizeof(struct word));
    
    result.data->data->data = malloc(sizeof(char) * words[sentences[paragraphs[k]]]);
    
    return result;
}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main() 
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }     
}