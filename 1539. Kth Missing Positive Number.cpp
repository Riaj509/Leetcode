class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {

        int l = 1, r = arr.size();
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (arr[mid - 1] - mid < k)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return k + l - 1;
    }
};