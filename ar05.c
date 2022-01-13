#include <stdio.h>  
  
int main() {  
    int n;  
    scanf("%d", &n);  
  
    int time[25] = {0};  
    int ans = 0;  
    for (int i=0; i<n; i++) {  
        int s, d;  
        scanf("%d%d", &s, &d);  
        for (int j=s; j<d; j++) {  
            time[j]++;  
            if (ans < time[j]) {  
                ans = time[j];  
            }  
        }  
    }  
    printf("%d\n", ans);  
}  
