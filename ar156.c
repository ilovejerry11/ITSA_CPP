#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char num[25];
    scanf("%s", num);

    int front = 0, rear = strlen(num) - 1;
    if (rear % 2 != 0) {
        printf("FALSE\n");
        return 0;
    }

    for (int i=0; i<rear+1; i++) {
        if (num[i] < '1' || num[i] > '9') {
            printf("FALSE\n");
            return 0;
        }
    }

    while (front <= rear) {
        if (num[front] != num[rear]) {
            printf("FALSE\n");
            return 0;
        }

        front++, rear--;
    }

    printf("TRUE\n");
}
