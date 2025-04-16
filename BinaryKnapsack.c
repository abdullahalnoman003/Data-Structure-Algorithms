#include <stdio.h>

int findMax(int a, int b) {
    if (a>b)
    {
        return a;
    }else{
        return b;
    }
}

int knapsack(int capacity, int weight[], int value[], int itemCount) {
    int dp[itemCount + 1][capacity + 1];

    for (int i = 0; i <= itemCount; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = findMax(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[itemCount][capacity];
}

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    int weight[n], value[n];

    for (int i = 0; i < n; i++) {
        printf("Enter weight and value of item %d: ", i + 1);
        scanf("%d %d", &weight[i], &value[i]);
    }

    int capacity;
    printf("Enter capacity of knapsack: ");
    scanf("%d", &capacity);

    int maxProfit = knapsack(capacity, weight, value, n);
    printf("Maximum profit with knapsack = %d\n", maxProfit);

    return 0;
}
