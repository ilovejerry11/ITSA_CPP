#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char num[10];
        scanf("%s", num);

        if (strlen(num) != 4) {
            printf("Failure Input\n");
            continue;
        }

        int record[10] = {0};
        for (int i=0; i<4; i++) {
            record[num[i]-'0']++;
        }
        
        int pair_cnt = 0;
        for (int i=0; i<10; i++) {
            if (record[i] == 2) {
                pair_cnt++;
            }
        }

        if (pair_cnt == 1) printf("Yes\n");
        else printf("No\n");
    }
}
