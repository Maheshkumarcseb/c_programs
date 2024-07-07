#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse each word in a string
void reverseWords(char *name) {
    char *word = strtok(name, " "); // Tokenize the string by space

    printf("this is string replacement :%s\n",*word[1]);
    while (word != NULL) {
        // Reverse the current word
        int len = strlen(word);
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }
        printf(" ");
        word = strtok(NULL, " "); // Move to the next word
    }
}

int main() {
    char name[] = "my name is mahesh kumar";

    // Make a writable copy of the original string
    char *nameCopy = malloc(strlen(name) + 1);
    if (nameCopy == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(nameCopy, name);

    // Print the original string
    printf("Original String: %s\n", name);

    // Reverse words in the string
    printf("Reversed Words:\n ");
    reverseWords(nameCopy);

    // Free the allocated memory
    free(nameCopy);

    return 0;
}
