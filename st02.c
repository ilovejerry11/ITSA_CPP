#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char str[300];
        scanf("%s", str);

        int front = 0, rear = strlen(str) - 1;
        while (front < rear) {
            char temp = str[front];
            str[front] = str[rear];
            str[rear] = temp;

            front++, rear--;
        }
        printf("%s\n", str);
    }
}
