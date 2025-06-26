#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValid(char str[]) {
    int i = 0;
    if (str[0] == '-') {
        i = 1;
        if (str[1] == '\0') return 0;
    }
    while (str[i] != '\0') {
        if (!isdigit(str[i])) return 0;
        i++;
    }
    return 1;
}
int convertToInt(char str[], int len) {
    if (len == 0) return 0;
    return convertToInt(str, len - 1) * 10 + (str[len - 1] - '0');
}
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%s", str);
    if (!isValid(str)) {
        printf("Chuoi khong hop le!\n");
        return 1;
    }
    int result = convertToInt(str, strlen(str));
    printf("So nguyen sau khi chuyen doi: %d\n", result);
    return 0;
}