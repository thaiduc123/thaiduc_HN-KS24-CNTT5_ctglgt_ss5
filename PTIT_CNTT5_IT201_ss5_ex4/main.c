#include <stdio.h>

int sum(int firstNum, int secondNum) {
    if (firstNum == secondNum) {
        return firstNum;
    }
    return firstNum + sum(firstNum + 1, secondNum);
}
int main() {
    int n, m;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    if (n<0 || m<0 || n >= m) {
        printf("Khong hop le\n");
    } else {
        printf("%d\n", sum(n, m));
    }
    return 0;
}
