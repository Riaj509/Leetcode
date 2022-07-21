class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto u : stones)pq.push(u);
        while(pq.size()>1){
            int a,b;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            pq.push(a-b);
        }
        return pq.top();
    }
};