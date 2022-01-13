#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int n;  
    scanf("%d", &n);  
  
    int record[130] = {0};  
  
    for (int i=0; i<n; i++) {  
        int temp;  
        scanf("%d", &temp);  
        if (record[temp]) {  
            printf("0\n");  
            return 0;  
        } else {  
            record[temp] = 1;  
        }  
    }  
  
    printf("1\n");  
}  
