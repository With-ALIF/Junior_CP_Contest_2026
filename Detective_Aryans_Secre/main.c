#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char s[100001];

    scanf("%d", &n);
    scanf("%s", s);

    for(int i = 0; i < n; i++){
        char c = s[i];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            s[i] = c + 1;
        } else {
            s[i] = c - 1;
        }

        printf("%c", s[i]);
    }
}