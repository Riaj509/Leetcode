class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return collect(0, 0, triangle, dp, n);
    }

    int collect(int i, int j, vector<vector<int>> &a, vector<vector<int>> &dp, int k)
    {
        if (i == k - 1)
            return a[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];

        dp[i][j] = min(a[i][j] + collect(i + 1, j + 1, a, dp, k), a[i][j] + collect(i + 1, j, a, dp, k));
        return dp[i][j];
    }
};