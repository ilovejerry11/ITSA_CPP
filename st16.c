#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char num[10];
    scanf("%s", num);

    for (int i=0; i<5; i++) {
        if (i == 4) printf("%c\n", num[i]);
        else printf("%c   ", num[i]);
    }
}
