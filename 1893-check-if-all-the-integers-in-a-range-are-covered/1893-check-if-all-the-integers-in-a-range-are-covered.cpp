class Solution {
public:
 

bool isCovered(vector<vector<int>>& vec, int left, int right) {
    
      sort(vec.begin(),vec.end());
    int flag=0;

    for(int j=left;j<=right;j++)
    {
        for(int i=0;i<vec.size();i++)
            {
               if(inRange(vec[i][0],vec[i][1],j))
               {
                   flag=1;
                   break;
               }
            
                if(flag)
                    break;
            }
        
        
        if(flag==0)
            return false;
        else
            flag=0;
    }
   
    
    return true;
}
       bool inRange(int low, int high, int x)
{
return ((x-high)*(x-low) <= 0);
}
};