#include <stdio.h>

typedef int keytype;
typedef int idx;

void exchangesort(int n, keytype S[]);
void display(int n, keytype S[]);

int main(void) {
    int n=6;
    keytype S[] = {10, 7, 11, 5, 13, 8};
    display(n, S);
    exchangesort(n, S);
    display(n, S);
    return 0;
}

void exchangesort(int n, keytype S[]) {
    idx i, j;
    keytype tmp;
    for ( i=0; i<n-1; i++ ) {
        for ( j=i+1; j<n; j++ ) {
            if ( S[j] < S[i] ) {
                tmp = S[j];
                S[j] = S[i];
                S[i] = tmp;
            }
        }
    }
}

void display(int n, keytype S[]) {
    idx i;
    printf("[ ");
    for ( i=0; i<n; i++ ) {
        printf("%d ", S[i]);
    }
    printf("]\n");
}