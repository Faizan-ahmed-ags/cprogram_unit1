#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char str[100];
    int n, i, j;
    int dp[100][100];

    printf("Enter the string: ");
    gets(str);

    n = strlen(str);

    // Single characters are palindromes
    for (i = 0; i < n; i++)
        dp[i][i] = 1;

    // Build the table
    for (i = n - 1; i >= 0; i--) {
        for (j = i + 1; j < n; j++) {
            if (str[i] == str[j])
                dp[i][j] = 2 + dp[i + 1][j - 1];
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    printf("Minimum deletions to make palindrome: %d", n - dp[0][n - 1]);

    return 0;
}