#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long max_sum = arr[0];
    long long current_sum = arr[0];

    for(int i = 1; i < n; i++) {
        if(current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("%lld\n", max_sum);

    return 0;
}