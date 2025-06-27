#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("khong hop le\n");
        return 0;
    }
    int fib[n];
    for (int i = 0; i < n; i++) {
        fib[i] = fibonacci(i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i != n - 1)
            printf(",");
    }
    return 0;
}