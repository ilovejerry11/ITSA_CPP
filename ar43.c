#include <stdio.h>     
#include <stdlib.h>     
     
int main() {     
    int m, n;     
    while (scanf("%d%d", &m, &n) != EOF) {     
        int ans = m;     
if(n==0){printf("1\n");return 0;  }  
        for (int i=0; i<n-1; i++) {     
            ans *= m;     
        }     
        printf("%d\n", ans);     
    }     
}  
