#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int score = 0, len = strlen(str);
    for (int i=0; i<len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            score += str[i] - 'A' + 1;
        } else {
            score += str[i] - 'a' + 1;
        }
    }
    printf("%d\n", score);
}
