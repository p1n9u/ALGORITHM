#include <stdio.h>

typedef int keytype;
typedef int idx;

void binsearch(int n, const keytype S[], keytype x, idx *loc);

int main(void) {
    int n = 6;
    keytype x = 5;
    keytype S[] = {1, 2, 3, 4, 5, 6};
    idx loc;
    binsearch(n, S, x, &loc);
    printf("%d\n", loc);
    return 0;
}

void binsearch(int n, const keytype S[], keytype x, idx *loc) { 
    idx low, high, mid; 
    low = 1; high = n; 
    *loc = 0;
    while ( low <= high && (*loc) == 0 ) {  
        mid = (low + high) / 2; 
        if ( x == S[mid] ) {
            *loc = mid;
        } else if ( x < S[mid] ) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}