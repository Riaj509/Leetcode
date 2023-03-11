class Solution
{
public:
    int distinctPrimeFactors(vector<int> &nums)
    {

        set<int> s;

        for (auto u : nums)
        {
            for (int i = 2; i * i <= u; i++)
            {
                if (u % i == 0)
                {
                    s.insert(i);
                    while (u % i == 0)
                        u /= i;
                }
            }
            if (u > 1)
                s.insert(u);
        }
        return s.size();
    }
};