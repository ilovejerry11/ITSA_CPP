#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n <= m) {
        for (int i=n; i<=m; i++) {
            for (int j=0; j<i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        for (int i=n; i>=m; i--) {
            for (int j=0; j<i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}
