#include <stdio.h>

typedef int keytype;
typedef int idx;

void seqsearch(int n, const keytype S[], keytype x, idx *loc);

int main(void) {
    int n = 6;
    keytype x = 13;
    keytype S[] = {10, 7, 11, 5, 13, 8};
    idx loc;
    seqsearch(n, S, x, &loc);
    printf("%d\n", loc);
    return 0;
}

void seqsearch(int n, const keytype S[], keytype x, idx *loc) {
    *loc = 1; 
    while ( *loc <= n && S[*loc] != x ) {
        (*loc)++;
    }
    if ( *loc > n ) {
        *loc = 0;
    }
}