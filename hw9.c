#include <stdio.h>

int convCase(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) {
    char input[101];
    printf("문자열 입력: ");
    fgets(input, sizeof(input), stdin);

    printf("변환된 문자열: ");
    for (int i = 0; input[i] != '\0'; i++) {
        putchar(convCase(input[i]));
    }

    return 0;
}