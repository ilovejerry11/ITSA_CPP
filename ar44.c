#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
int main() {  
    char str[10000];  
    scanf("%s", str);  
  
    int len = strlen(str);  
    char *front = str, *rear = str + len -1;  
    while (front < rear) {  
        if (*front != *rear) {  
            printf("NO\n");  
            return 0;  
        }  
        front++, rear--;  
    }  
    printf("YES\n");  
}  
