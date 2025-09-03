#include <stdio.h>

void print_desc(int n) {
    if (n == 0)
        return;
    printf("%d\n", n);
    print_desc(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_desc(n);
    return 0;
}
