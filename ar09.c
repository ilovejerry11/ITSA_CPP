#include <stdio.h>  
#include <stdlib.h>  
  
int cmp (const void *a, const void *b) {  
    int *A = (int *)a, *B = (int *)b;  
    if (*A > *B) {  
        return 1;  
    } else {  
        return -1;  
    }  
}  
  
int main() {  
    char str[20];  
    scanf("%s", str);  
  
    int len = 0;  
    for (int i=0; str[i]!='\0'; i++) {  
        len++;  
    }  
      
    int arr[10], idx = 0;  
    for (int i=0; i<(len+1)/2; i++) {  
        arr[idx++] = str[i*2] - '0';  
    }  
  
    qsort(arr, idx, sizeof(int), cmp);  
  
    int min = 0, max = 0;  
    for (int i=0; i<idx; i++) {  
        min *= 10, max *= 10;  
        min += arr[i];  
        max += arr[idx - i - 1];  
    }  
  
    printf("%d\n", max - min);  
}  
