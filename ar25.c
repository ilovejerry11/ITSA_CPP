#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
int main() {  
    char str[100000];  
    scanf("%s", str);  
  
    int len = strlen(str);  
  
    int record[130] = {0};  
    for (int i=0; i<len; i++) {  
        record[str[i]]++;  
    }  
  
    for (int i=129; i>32; i--) {  
        if (record[i]) {  
            printf("%d %d\n", i, record[i]);  
        }  
    }  
}  
