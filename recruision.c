#include <stdio.h>

int recursion(int n) {
    //dieu kien dung
    if (n == 1) return 1;
    //goi lai chinh no
    return n + recursion(n-1);
}
int factorial(int n) {
    //dieu kien dung
    if (n == 1) return 1;
    //goi lai chinh no
    return n * factorial(n-1);
}
int main(){
    //tinh tong tu 1 den n: n + n-1 + n-2 + ... + 1
    printf("%d\n", recursion(5));
    //tinh giai thua cua n: n!
    printf("%d\n", factorial(5));
}