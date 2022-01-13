#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char str[300];
    scanf("%s", str);

    char convert = 'a' - 'A';
    for (int i=0; i<strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + convert;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str [i] - convert;
        }
    }

    int front = 0, rear = strlen(str) - 1;
    while (front < rear) {
        char temp = str[front];
        str[front] = str[rear];
        str[rear] = temp;

        front++, rear--;
    }
    printf("%s\n", str);
    
}
