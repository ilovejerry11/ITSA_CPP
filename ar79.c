#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1) {
        int n;
        scanf("%d", &n);

        if (n == -1) break;
        double ans = n * n * n / 3.0;
        printf("%.1f\n", ans);
    }
}
