#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int n;  
    scanf("%d", &n);  
  
    int num[4];  
    for (int i=0; i<4; i++) {  
        num[i] = (n % 10 + 7) % 10;  
        n /= 10;  
    }  
    printf("%d%d%d%d\n", num[1], num[0], num[3], num[2]);  
}  
