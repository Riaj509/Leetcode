class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         unordered_map<char, int> mp;
    int ans = 0;
    for (int it : tasks)
        mp[it]++;
    priority_queue<int> mx;
    for (auto it : mp)
        mx.push(it.second);
    
    
    while (!mx.empty())
    {
        vector<int> temp;
        for (int i = 0; i <= n; i++)
        {
            if (!mx.empty())
            {
                temp.push_back(mx.top());
                mx.pop();
            }
        }
        for (int it : temp)
        {
            if (--it > 0)
                mx.push(it);
        }
        ans += (mx.empty() ? temp.size() : n + 1);
    }
    return ans;
    }
};