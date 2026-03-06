#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        char s[100005];

        scanf("%d", &n);
        scanf("%s", s);

        printf("%c", s[0]);

        for(int i = 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    return 0;

}