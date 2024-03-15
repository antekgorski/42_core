#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int main() {
    // Test uppercase letters
    for (char c = 'A'; c <= 'Z'; c++) {
        int expected = tolower(c);
        int result = ft_tolower(c);
        printf("Input: %c, Expected: %c, Result: %c\n", c, expected, result);
    }

    // Test lowercase letters
    for (char c = 'a'; c <= 'z'; c++) {
        int expected = tolower(c);
        int result = ft_tolower(c);
        printf("Input: %c, Expected: %c, Result: %c\n", c, expected, result);
    }

    // Test non-alphabetic characters
    char non_alphabetic_chars[] = {'!', '@', '1', ' ', '\n'};
    int num_non_alphabetic_chars = sizeof(non_alphabetic_chars) / sizeof(non_alphabetic_chars[0]);
    for (int i = 0; i < num_non_alphabetic_chars; i++) {
        char c = non_alphabetic_chars[i];
        int expected = tolower(c);
        int result = ft_tolower(c);
        printf("Input: %c, Expected: %c, Result: %c\n", c, expected, result);
    }

    return 0;
}