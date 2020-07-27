#include <stdio.h>

typedef int number;
typedef int idx;

number sum(int n, const number S[]);

int main(void) {
    int n=6;
    number result=0;
    number S[] = {10, 7, 11, 5, 13, 8};

    result = sum(n, S);
    printf("%d\n", result);
    return 0;
}

number sum(int n, const number S[]) {
    idx i;
    number result;

    result = 0;
    for ( i=0; i<n; i++ ) {
        result = result + S[i];
    }
    return result;
}