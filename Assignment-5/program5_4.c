#include <stdio.h>
int isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}
int isAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1;
    }
    return 0;
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else if (isAlphabet(ch)) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not an alphabet letter.\n", ch);
    }
    return 0;
}

