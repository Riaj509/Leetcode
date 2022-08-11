struct weight{
    long long int w,u,v;
};
class Solution {
public:    
long long int parent[100000];
    long long int rank[100000];

    
    int minCostConnectPoints(vector<vector<int>>& points) {
       
        
        
        vector<weight> connect;
        int n=points.size();
        for(int i=0;i<n;i++){
            parent[i]=i;
            rank[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int val=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            connect.push_back({val,i,j});
            }
        }
     sort(connect.begin(),connect.end(),[&](const weight &a ,const weight &b){
         return a.w<b.w;
     });
                // for(auto x : connect)cout<<x.w<<" "<<x.u<<" "<<x.v<<endl;

        long long int ans=0;
        for(auto x : connect)
        {
            long long int cost=x.w;
             int src=x.u;
             int  des=x.v;
            int ck,ck1;
            ck=find(src);
            ck1=find(des);
            if(ck!=ck1){
                union_(src,des);
                ans+=cost; 
            }
            
        }
         return ans;
        
    }
    
    


long long int  find(long long int  u)
{
    if (parent[u] == u)
        return u;
    return parent[u] = find(parent[u]);
}

void union_(long long int  u, long long int v)
{
    long long int a, b;
    a = find(u);
    b = find(v);
   if(rank[a]>rank[b]) parent[b]=a;
    else if(rank[b]>rank[a])parent[b]=a;
    else {
        parent[b]=a;
        rank[a]++;
    }
     
}
};