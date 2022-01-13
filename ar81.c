#include <stdio.h>  
#include <stdlib.h>  
  
int cmp(const void *a, const void *b) {  
    int *A = (int *)a, *B = (int *)b;  
    if (*A > *B) return -1;  
    return 1;  
}  
  
int main() {  
    int a, b, c;  
      
    int arr[9];  
    for (int i=0; i<3; i++) {  
        scanf("%d,%d,%d", &a, &b, &c);  
        arr[i*3] = a, arr[i*3+1] = b, arr[i*3+2] = c;  
    }  
  
    qsort(arr, 9, sizeof(int), cmp);  
  
    printf("%d\n", arr[0] + arr[1] + arr[2]);  
}  
