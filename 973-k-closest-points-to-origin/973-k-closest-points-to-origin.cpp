class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<pair<int,pair<int,int>>>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            int a,b,ans=0;
            a=points[i][0];
            b=points[i][1];
            ans=a*a+b*b;
            pq.push({-ans,{a,b}});
        }
        vector<vector<int>> v(k);
        int i=0;
        while(k>0){
            int x,y;
            x=pq.top().second.first;
            y=pq.top().second.second;
            pq.pop();
            v[i].push_back(x);            
            v[i].push_back(y);
            i++;
            k--;
        }
        return v;
    }
};