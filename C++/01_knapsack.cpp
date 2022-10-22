#include <bits/stdc++.h>
using namespace std;

//
// struct IteWs
// {
// 	int profit;
// 	int weight;
// };

int knapsack_01(int profit[], int weight[], int n, int W)
{

    int k[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                k[i][w] = 0;
            else if (weight[i - 1] <= w)
                k[i][w] = max(profit[i - 1] +
                                  k[i - 1][w - weight[i - 1]],
                              k[i - 1][w]);
            else
                k[i][w] = k[i - 1][w];
        }
    }
    //uncomment this to see which item included
    //or comment this if you dont want to see included items
    int i = n, j = W;
    while (i > 0 && j > 0)
    {
    	if (k[i][j] == k[i - 1][j])
    	{
    		cout << i << " = 0" << endl;
    		i--;
    	}
    	else
    	{
    		cout << i << " = 1" << endl;
    		i--;
    		j = j - weight[i];
    	}
    }

    return k[n][W];
}
int main()
{

    int profit[] = {10, 15, 40};
    int weight[] = {1, 2, 3};
    int W = 6;
    int n = sizeof(profit) / sizeof(profit[0]);

    cout << knapsack_01(profit, weight, n, W);

    return 0;
}
