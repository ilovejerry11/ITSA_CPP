#include <stdio.h>  
  
int main() {  
    int sum = 0;  
    for (int i=0; i<6; i++) {  
        int num;  
        scanf("%d", &num);  
        sum += num * num *num;  
    }  
    printf("%d\n", sum);  
}  
