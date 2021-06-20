#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int n, i, j, profit[100], weight[100], w, dp[100][100];
    cout << "Enter number of items : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter weight of item " << i << " : ";
        cin >> weight[i];
        cout << "Enter profit of " << i<< " : ";
        cin >> profit[i];
    }
    cout << "Enter Capacity of knapsack : ";
    cin >> w;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            
            else if (weight[i] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + profit[i]);
        }
    }
    cout << "The Table is : " << endl;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= w; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    cout << "The maximum profit is : " << dp[n][w] << endl;
    cout << "The most valuable subset is : " << endl;
    j = w;
    for (i = n; i >= 1; i--)
    {
        if (dp[i][j] != dp[i - 1][j])
        {
            cout << "item - " << i << endl;
            j = j - weight[i];
        }
    }
}
