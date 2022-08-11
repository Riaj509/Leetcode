class Solution {
public:

int dist(int x1, int y1, int x2, int y2)
{
    return (abs(x1-x2) + abs(y1-y2));
}

void buildGraph(vector<vector<int>>& points, vector<vector<pair<int, int>>> &adj)
{
    int V = points.size();
    
    for(int i=0;i<V;i++)
    {
        vector<pair<int,int>> temp;
        for(int j=0;j<V;j++)
        {
            if(i==j)// no need to calculate the distance
                continue;
                
            else
            {
                int src_x = points[i][0];
                int src_y = points[i][1];
            
                int dest_x = points[j][0];
                int dest_y = points[j][1];
                
                int wt = dist(src_x, src_y, dest_x, dest_y);
                temp.push_back({j,wt});    
            }
        }
        
        adj.push_back(temp);
    }
}


int minVertex(vector<int> &distance, vector<bool> &setMST)
{
    int minV = INT_MAX;
    int minD = INT_MAX;
    
    for(int i=0;i<distance.size();i++)
    {
        if(setMST[i]==false && distance[i]<minD)
        {
            minV = i;
            minD = distance[i];
        }
    }
    
    return minV;
}
    
int MST(vector<vector<int>>& points, vector<vector<pair<int,int>>> &adj)
{
    int V = points.size();
    int ans = 0;
    
    vector<int> distance(V,INT_MAX);
    vector<bool> setMST(V,false);
    distance[0] = 0;
    
    for(int i=0;i<V-1;i++)
    {
        int u = minVertex(distance,setMST);
        setMST[u] = true;
        
        for(auto it : adj[u])
        {
            int v = it.first;// neighbour
            int weight = it.second;// node weight
            
            // from the already created adjacency list , take out V and wt , if vertex is not part of MST
            // & curr_weight < prev_weight, then include in MST
            
            if (setMST[v] == false && weight < distance[v])
            {
                distance[v] = weight;
                // ans+=weight;
            }
        }  
    }
    
    for(int i=0;i<distance.size();i++)
    {
        ans+=distance[i];
        // cout<<distance[i]<<" ";
    }
            
    return ans;
}

void printAdj(vector<vector<int>> &points, vector<vector<pair<int, int>>> &adj)
{
    int V = points.size();
    for (int i = 0; i < V; i++)
    {
        for(auto &x : adj[i])
            cout<<"("<<x.first<<","<<x.second<<")"<<" , ";       
        
        cout << endl;
    }
}

int minCostConnectPoints(vector<vector<int>>& points)
{
    vector<vector<pair<int, int>>> adj;
    buildGraph(points,adj);
    // printAdj(points,adj);
    // cout<<endl;
    
    int res = MST(points,adj);
    return res;
}
};