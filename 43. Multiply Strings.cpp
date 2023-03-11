class Solution
{
public:
    string multiply(string num1, string num2)
    {

        int n = num1.size(), m = num2.size();
        string ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int cary = 0;
            int a, b;
            for (int j = m - 1; j >= 0 || cary; j--)
            {
                a = (i >= 0 ? num1[i] - '0' : 0);
                b = (j >= 0 ? num2[j] - '0' : 0);
                int x, y;
                x = n - i - 1;
                y = m - j - 1;
                if (x + y == ans.size())
                    ans += '0';
                int z = ans[x + y] - '0' + cary;
                z += (a * b);
                cary = z / 10;
                ans[x + y] = (char)((z % 10) + '0');
            }
        }
        while (ans.size() - 1 > 0 && ans.back() == '0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};