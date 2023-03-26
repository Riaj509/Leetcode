struct dsu
{
    vector<int> par, rnk, size;
    int c;
    dsu(int n) : par(n + 1), rnk(n + 1, 0), size(n + 1, 1), c(n)
    {
        for (int i = 1; i <= n; ++i)
            par[i] = i;
    }
    int find(int i) { return (par[i] == i ? i : (par[i] = find(par[i]))); }
    bool same(int i, int j) { return find(i) == find(j); }
    int get_size(int i) { return size[find(i)]; }
    int count() { return c; } // connected components
    int merge(int i, int j)
    {
        if ((i = find(i)) == (j = find(j)))
            return -1;
        else
            --c;
        if (rnk[i] > rnk[j])
            swap(i, j);
        par[i] = j;
        size[j] += size[i];
        if (rnk[i] == rnk[j])
            rnk[j]++;
        return j;
    }
};

class Solution
{
public:
    long long countPairs(int n, vector<vector<int>> &edges)
    {

        dsu ds(n);

        for (auto u : edges)
        {
            if (ds.same(u[0] + 1, u[1] + 1))
                continue;
            ds.merge(u[0] + 1, u[1] + 1);
        }
        vector<long long> army;
        set<int> leader;

        for (int i = 1; i <= n; i++)
            leader.insert(ds.find(i));

        for (auto u : leader)
            army.push_back(ds.get_size(u));
        for (int i = 1; i < army.size(); i++)
            army[i] += army[i - 1];
        long long ans = 0;
        for (int i = 0; i < army.size() - 1; i++)
        {
            if (i > 0)
            {
                int x = army[i] - army[i - 1];
                int y = army[army.size() - 1] - army[i];
                ans += (x * y);
            }
            if (i == 0)
                ans += army[0] * (army[army.size() - 1] - army[0]);
        }
        return ans;
    }
};