#include <stdio.h>

int digit_sum(int n) {
    if (n < 10)
        return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return digit_sum(sum);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", digit_sum(n));
    return 0;
}
