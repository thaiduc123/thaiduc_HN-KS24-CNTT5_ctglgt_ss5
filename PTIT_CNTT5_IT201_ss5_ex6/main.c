#include <stdio.h>

int sum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int n;
    printf("Nhap so luong phan: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Khong hop le.\n");
        return 0;
    }
    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, n);
    printf("%d\n", result);
    return 0;
}