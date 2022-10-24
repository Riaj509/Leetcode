class Solution {
private:
    //returns true if interval l contains interval r
    bool contains(vector<int>& l, vector<int>& r) {
        return l[0] <= r[0] && r[1] <= l[1];
    }
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(begin(ranges), end(ranges), [this](vector<int>& l, vector<int>& r) {
            if (contains(r, l)) return false;
            else if (contains(l, r)) return true;
            else return l[0] < r[0];
        });
        int v = 0, k = left, n = ranges.size();
        while (v < n && k <= right) {
            if (v == 0 || !contains(ranges[v - 1], ranges[v]))
                while (ranges[v][0] <= k && k <= ranges[v][1] && k <= right) k++;
            v++;
        }
        return k > right;
    }
};