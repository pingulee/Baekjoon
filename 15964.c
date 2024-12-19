#include <stdio.h>

int main() {
    long long num[2];
    scanf("%lld %lld", &num[0], &num[1]);
    printf("%lld", (num[0]+num[1])*(num[0]-num[1]));
    return 0;
}