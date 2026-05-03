#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int count_char(char str[], char target) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    char letter;
    char str[MAX_LEN];

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);
    fgets(str, MAX_LEN, stdin);

    int result = count_char(str, letter);

    printf("Count of '%c': %d\n", letter, result);

    return 0;
}
