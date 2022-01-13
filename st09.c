#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
