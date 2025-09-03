#include <stdio.h>
#include <string.h>

int count(char s[], int start, int k) {
    if (start >= strlen(s))
        return 0;
    int freq[256] = {0}, unique = 0, count = 0;
    for (int end = start; end < strlen(s); end++) {
        if (freq[(int)s[end]] == 0)
            unique++;
        freq[(int)s[end]]++;
        if (unique == k)
            count++;
        else if (unique > k)
            break;
    }
    return count + count(s, start + 1, k);
}

int main() {
    char s[100];
    int k;
    printf("Enter string: ");
    scanf("%s", s);
    printf("Enter k: ");
    scanf("%d", &k);
    printf("%d\n", count(s, 0, k));
    return 0;
}
