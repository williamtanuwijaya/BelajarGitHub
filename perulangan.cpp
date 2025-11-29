#include <iostream>
int main()
{
    // cara 1

    int n;
    n = 10;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*n - 1; j++) {    
            if(j >= n-(i-1) && j <= n+(i-1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= 2*n - 1; j++) {    
            if(j >= n-(i-1) && j <= n+(i-1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // cara 2
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            printf("+");

        }
        printf("\n");
    }
    return 0;
}
