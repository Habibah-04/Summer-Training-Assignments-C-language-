#include <stdio.h>
void makeLower(char str[]) {
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    makeLower(str);
    printf("Result: %s\n", str);
    return 0;
}

