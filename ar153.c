#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int tmp;
    int arr[200], idx = 0;
    int ans[100], jdx = 0;
    while (scanf("%d", &tmp) != EOF) {
        arr[idx++] = tmp;
    }
    
    for (int i=0; i<idx; i++) {
        if (i == 0) {
            if (arr[i] > arr[i+1]) ans[jdx++] = i;
            continue;
        }
        if (i == idx-1) {
            if (arr[i] > arr[i-1]) ans[jdx++] = i;
            continue;
        }
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            ans[jdx++] = i;
        }
    }

    for (int i=0; i<jdx; i++) {
        if (i == jdx-1) printf("%d\n", ans[i]);
        else printf("%d ", ans[i]);
    }
}
