#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (z % x == 0 && z % y == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}