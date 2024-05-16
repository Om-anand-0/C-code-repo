#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowel_count = 0, consonant_count = 0;
    char vowels[10] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]!= '\0'; i++) {
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            consonant_count++;
        }
    }

    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", consonant_count);

    printf("Vowels are: ");
    for (i = 0; i < 10; i++) {
        if (strchr(str, vowels[i])) {
            printf("%c ", vowels[i]);
        }
    }

    printf("\nConsonants are: ");
    for (i = 0; i < 21; i++) {
        if (strchr(str, consonants[i])) {
            printf("%c ", consonants[i]);
        }
    }

    return 0;
}