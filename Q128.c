/*
Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
