#include <stdio.h>

int main() {
    long num[5];

    scanf("%ld %ld %ld %ld %ld", &num[0], &num[1], &num[2], &num[3], &num[4]);
    printf("%ld", (num[0]*num[0] + num[1]*num[1] + num[2]*num[2] + num[3]*num[3] + num[4]*num[4]) % 10);

    return 0;
}
