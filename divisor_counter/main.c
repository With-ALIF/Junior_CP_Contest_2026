#include <stdio.h>

int main() {
    long long int n;
    if (scanf("%lld", &n) != 1)
    
    return 0;

    long long int count = 0;

    for (long long int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                count++;
            } else {
                count += 2;
            }
        }
    }

    printf("%lld\n", count);
}