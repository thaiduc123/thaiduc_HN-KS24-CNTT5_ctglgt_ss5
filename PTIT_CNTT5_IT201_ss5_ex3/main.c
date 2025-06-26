#include <stdio.h>

int factorial(int n) {
    if(n==1) {
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong hop le\n");
    } else {
        printf("%d\n", factorial(n));
    }
    return 0;
}