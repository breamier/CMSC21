// Aimee Rae F. Bayle
// CMSC21-Lec11-Assignment

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// Declares the functions to be used
void scan_word(int occurrences[26]);
bool is_anagram( int occurrences1[26], int occurrences2[26]);

int main(void) {
    // Declares the variable and arrays
    int i,
        occurrences[26] = {0},
        occurrences1[26] = {0},
        occurrences2[26] = {0};

    // Prompts the user to enter the first word
    printf("Enter first word: ");
    // Calls the scan word function and uses occurrences1 as the argument
    scan_word(occurrences1);

    // Prompts the user to enter the second word
    printf("Enter second word: ");
    // Calls the scan word function and uses occurrences 2 as the argument
    scan_word(occurrences2);

    // If-else statement that shows the result after calling the is_anagram function. 
    if (is_anagram(occurrences1, occurrences2)) {
        printf("\nThe words are anagrams.\n");
    }
    else {
        printf("\nThe words are not anagrams.\n");
    }

    return 0;
}

// Function that scans the word entered by the user
void scan_word(int occurrences[26]) {
    int c;
    // Loops through the elements in the array
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            // converts the letter into its uppercase and adds 1 to the element for each letter found in the word
            *(occurrences + (toupper(c) - 'A')) +=1;
        }
    }
}

// Function that tests whether the words are anagrams or not
bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    // Loops through the elements of both arrays and compares them
    for (i = 0; i < 26; i++) {
        // If the values of arrays are not equal, it will return FALSE
        if (*(occurrences1 + i) != *(occurrences2 + i)) {
            return false;
        }
    }
    // returns true if the elements in both arrays are equal
    return true;
}
