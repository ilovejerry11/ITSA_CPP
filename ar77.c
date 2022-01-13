#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int num = n * m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (j == m-1) printf("%d\n", num--);
            else printf("%d ", num--);
        }
    }
}
