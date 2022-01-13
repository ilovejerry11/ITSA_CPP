#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int record[50] = {0};
    for (int i=0; i<n; i++) {
        char t;
        scanf(" %c", &t);
        record[t - 'a'] += 1;
    }

    for (int i=0; i<26; i++) {
        if (record[i] == 0) continue;
        printf("%c %d\n", 'a' + i, record[i]);
    }
}
