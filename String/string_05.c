#include <stdio.h>

int is_upper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int is_lower(char c) {
    return (c >= 'a' && c <= 'z');
}

int is_special(char c) {
    return (!(is_upper(c) || is_lower(c) || (c >= '0' && c <= '9')));
}

int main() {
    char str[100];
    int i, upper = 0, lower = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]!= '\0'; i++) {
        char c = str[i];

        if (is_upper(c)) {
            upper++;
        } else if (is_lower(c)) {
            lower++;
        } else if (is_special(c)) {
            special++;
        }
    }

    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    printf("Special characters: %d\n", special);

    return 0;
}