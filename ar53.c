#include <stdio.h>  
#include <stdlib.h>  
  
int cmp(const void *a, const void *b) {  
    int *A = (int *)a, *B = (int *)b;  
    if (*A < *B) return -1;  
    return 1;  
}  
  
int main() {  
    int n;  
    scanf("%d", &n);  
  
    int arr[10000];  
    for (int i=0; i<n; i++) {  
        scanf("%d", &arr[i]);  
    }  
  
    qsort(arr, n, sizeof(int), cmp);  
  
    for (int i=0; i<n; i++) {  
        printf("%d\n", arr[i]);  
    }  
}  
