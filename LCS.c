#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    if (a>b)
    {
        return a;
    }else{
        return b;
    }
    
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int n = strlen(str1);
    int m = strlen(str2);
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("Length of LCS = %d\n", dp[n][m]);
    return 0;
}
