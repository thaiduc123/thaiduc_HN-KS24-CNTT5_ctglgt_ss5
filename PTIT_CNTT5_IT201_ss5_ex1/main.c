#include <stdio.h>

int print(int n) {
    if (n == 0) {
        return;
    }
    print(n - 1);
    printf("%d ", n);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    print(n);
    return 0;
}