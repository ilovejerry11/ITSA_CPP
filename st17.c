#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1000];
    while (scanf("%s", str) != EOF)
    {
        int front = 0, rear = strlen(str) - 1;
        int flag = 1;
        while (front < rear) {
            if (str[front] != str[rear]) {
                printf("NO\n");
                flag = 0;
                break;
            }

            front++, rear--;
        }
        if (flag) printf("YES\n");
    }
}
