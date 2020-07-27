#include <stdio.h>

typedef int idx;

int fib_recur(int n);
int fib(int n);

int main(void) {
    int n = 6;
    printf("%d\n", fib_recur(n));
    printf("%d\n", fib(n));
    return 0;
}

int fib_recur(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int fib(int n) {
    idx i;
    int f[n];
    f[0] = 0;
    if (n > 0) {
        f[1] = 1;
        for ( i=2; i <= n; i++ ) {
            f[i] = f[i-1] + f[i-2];
        }
    }
    return f[n];
}