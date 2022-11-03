class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        
        
        unordered_set<string> nod;
        unordered_map<string,bool>vis;
        queue<string>q;
        string cng="ACGT";
        string str=startGene,end=endGene;
        for(auto u : bank)nod.insert(u);
        q.push(str); 
      vis[str]=true;
        int lap=0;
        
        while(!q.empty()){
            
            int sz=q.size();
            while(sz--){
                  str=q.front();
                   q.pop();
              
            if(str==end) return lap;
            
            for(auto u : cng){
                for(int i=0;i<str.size();++i){
                    string tmp=str;
                    tmp[i]=u;
                    
                    if(!vis[tmp] && nod.find(tmp)!=nod.end()){
                        q.push(tmp);
                        vis[tmp]=true;
                    }
                }
            }
            }
            lap++;
        }
        
        return -1;
        
    }
};