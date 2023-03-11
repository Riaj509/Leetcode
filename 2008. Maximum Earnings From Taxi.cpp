class Solution
{
public:
    long long maxTaxiEarnings(int n, vector<vector<int>> &rides)
    {
        int m = rides.size();
        sort(rides.begin(), rides.end());
        vector<long long> dp(m + 1, -1);

        vector<int> start;
        for (int i = 0; i < m; i++)
            start.push_back(rides[i][0]);
        return solve(0, dp, rides, start, m);
    }

    long long solve(int x, vector<long long> &dp, vector<vector<int>> &r, vector<int> &str, int m)
    {
        if (x >= m)
            return 0;

        if (dp[x] != -1)
            return dp[x];
        int idx = lower_bound(str.begin(), str.end(), r[x][1]) - str.begin();
        long long pick = (r[x][1] - r[x][0] + r[x][2]) + solve(idx, dp, r, str, m);
        long long not_pick = solve(x + 1, dp, r, str, m);

        dp[x] = max(pick, not_pick);
        return dp[x];
    }
};