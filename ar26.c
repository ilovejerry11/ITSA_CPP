#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int num;  
    int arr[10000], idx = 0;  
    while (scanf("%d", &num) != EOF) {  
        arr[idx++] = num;  
    }  
  
    for (int i=0; i<idx-1; i++){  
        printf("%d,", arr[i]);  
    }  
    printf("%d\n", arr[idx-1]);  
  
    // sort  
    for (int i=0; i<idx; i++) {  
        int max = -2e9, pos;  
        for (int j=i; j<idx; j++) {  
            if (max < arr[j]) {  
                max = arr[j];  
                pos = j;  
            }  
        }  
  
        if (pos == i) continue;  
  
        // swap  
        int tmp = arr[i];  
        arr[i] = arr[pos];  
        arr[pos] = tmp;  
  
        for (int i=0; i<idx-1; i++){  
            printf("%d,", arr[i]);  
        }  
        printf("%d\n", arr[idx-1]);  
    }  
}  
