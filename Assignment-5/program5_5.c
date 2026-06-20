#include <stdio.h>
void makeUpper(char str[]) {
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    makeUpper(str);
    printf("Result: %s\n", str);
    return 0;
}

