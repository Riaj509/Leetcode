#define ull unsigned long long

class Solution
{
public:
    const ull p = 261;
    string longestDupSubstring(string s)
    {

        ull n = s.size();
        s = '#' + s;
        vector<ull> po(n + 1, 0), hash(n + 1, 0);
        po[1] = 1;
        for (int i = 2; i <= n; i++)
            po[i] = (po[i - 1] * p);
        // dbg(po);
        for (int i = 1; i <= n; i++)
            hash[i] = (hash[i - 1] + (s[i] - 'a' + 1) * po[i]);
        // dbg(hash);

        ull l = 1, r = n, range_ = 0, bond = -1, cnt = 0;

        while (l <= r)
        {
            ull mid = (l + r) >> 1;

            set<ull> st;
            bool f = false;
            for (int i = 1; i + mid - 1 <= n; i++)
            {
                ull cur = ((hash[i + mid - 1]) - hash[i - 1]);
                // cout << cur << " early\n";
                cur = (cur * po[n - i + 1]);
                // cout << cur << " " << po[n - i + 1] << " " << mid << " " << cnt << " hs\n";
                // cnt++;

                if (st.find(cur) != st.end())
                {
                    // cout << "true";
                    if (range_ < mid)
                    {
                        range_ = mid;
                        bond = i;
                        f = true;
                        break;
                    }
                }
                st.insert(cur);
            }
            // dbg(st);
            if (f)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (bond == -1)
            return "";
        return s.substr(bond, range_);
    }
};