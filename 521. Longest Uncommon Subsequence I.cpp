class Solution
{
public:
    int findLUSlength(string a, string b)
    {
        int n = a.size(), m = b.size();
        if (a == b)
            return -1;
        return (n > m ? n : m);
    }
};