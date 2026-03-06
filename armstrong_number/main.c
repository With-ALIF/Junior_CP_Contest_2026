#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int power(int a, int b) {
    long long ans = 1;
    for(int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        long long n, temp, sum = 0;
        scanf("%lld", &n);

        temp = n;
        int digits = 0;

        while(temp){
            digits++;
            temp /= 10;
        }

        temp = n;
        
        while(temp){
            int d = temp % 10;
            sum += power(d, digits);
            temp /= 10;
        }

        if(sum == n) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}