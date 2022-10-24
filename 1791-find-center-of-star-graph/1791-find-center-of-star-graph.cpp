class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int n=edges.size();
        vector<int>nod(n+2,0);
        int mn=1,nd=-1;
        for(int i=0;i<edges.size();++i){
            nod[edges[i][0]]++;
            nod[edges[i][1]]++;
            
            if(nod[edges[i][0]]>mn){
                mn=nod[edges[i][0]];
                nd=edges[i][0];
            }
              if(nod[edges[i][01]]>mn){
                mn=nod[edges[i][1]];
                nd=edges[i][1];
            }   
        }
        
        return nd;
        
    }
};