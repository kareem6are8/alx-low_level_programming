#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() % RAND_MAX - RAND_MAX/2;
    
    printf("%d ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }
    
    return 0;
}
