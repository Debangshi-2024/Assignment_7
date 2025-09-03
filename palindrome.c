#include <stdio.h>
#include <string.h>

int is_palindrome(char s[], int start, int end) {
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome(s, start + 1, end - 1);
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    if (is_palindrome(s, 0, strlen(s) - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
