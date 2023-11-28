// Programmer: Amna Asim
// Date: 14th November, 2023
// Lab 10
// Question 4



#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverse_words(char *sentence) {
    char *word_start = sentence;
    char *word_end = sentence;

    while (*word_end) {
        word_end++;
        if (*word_end == ' ' || *word_end == '\0') {
            reverse_word(word_start, word_end - 1);
            word_start = word_end + 1;
        }
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';


    reverse_words(sentence);


    printf("Reversed words: %s\n", sentence);

    return 0;
}
