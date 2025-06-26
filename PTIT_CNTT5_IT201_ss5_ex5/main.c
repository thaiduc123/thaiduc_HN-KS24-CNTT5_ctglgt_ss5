#include <stdio.h>
#include <string.h>

int palindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    str[strcspn(str, "\n")] = '\0';
    if (palindrome(str, 0, len - 1)) {
        printf("palindrome valid\n");
    } else {
        printf("palindrome invalid\n");
    }

    return 0;
}