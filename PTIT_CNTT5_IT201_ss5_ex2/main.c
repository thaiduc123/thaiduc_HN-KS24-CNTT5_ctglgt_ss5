#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n-1);
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương lớn hơn 0.\n");
    } else {
        printf("Các số từ 1 đến %d là:\n", n);
        printNumbers(n);
        printf("\n");
    }
    return 0;
}