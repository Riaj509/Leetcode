class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        char ch = chars[0];
        int cnt = 1;
        int ans = 0;
        int lft = 0;
        for (int i = 1; i < n; i++)
        {
            if (chars[i] == ch)
                cnt++;
            else
            {
                string x = to_string(cnt);
                chars[lft++] = ch;
                if (cnt > 1)
                {
                    ans = ans + x.size() + 1;
                    int i = 0;
                    while (i < x.size())
                    {
                        chars[lft++] = x[i];
                        i++;
                    }
                }
                else
                    ans++;
                cnt = 1;
                ch = chars[i];
            }
        }
        chars[lft++] = ch;
        if (cnt > 1)
        {
            ans = ans + log10(cnt) + 2;
            int i = 0;
            string x = to_string(cnt);
            while (i < x.size())
            {
                chars[lft++] = x[i];
                i++;
            }
        }
        else
            ans++;
        return ans;
    }
};