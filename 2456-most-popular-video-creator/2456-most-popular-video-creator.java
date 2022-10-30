class Pair{
    long viewsCnt;
    int ind;
    
    public Pair(long a, int b){
        viewsCnt = a;
        ind = b;
    }
}

class Solution {
    public List<List<String>> mostPopularCreator(String[] creators, String[] ids, int[] views) {
        Map<String , Pair> mp = new HashMap<>();  // Creator -> Views, min index of views[] with highest views
        // Map<String , String> cid = new HashMap<>();  // Creator -> Lexigr. smallest Id with highest views      
        
        int n = creators.length;
        long max = 0;
        
        
        for(int i=0; i<n; i++){
            
            if(mp.containsKey(creators[i])){
                long count = mp.get(creators[i]).viewsCnt;
                int vindex = mp.get(creators[i]).ind;
                
                if(views[i] > views[vindex]){
                    mp.put(creators[i] , new Pair(count+views[i] , i));
                }
                else if(views[i] == views[vindex]){
                    if(ids[i].compareTo(ids[vindex])>0)
                         mp.put(creators[i] , new Pair(count + views[i] , vindex));
                    else
                         mp.put(creators[i] , new Pair(count + views[i] ,i));
                }
                else{
                    mp.put(creators[i] , new Pair(count + views[i] , vindex));
                }                
            }          
            else{
                mp.put( creators[i] , new Pair(views[i] , i) );                
            }
            max = Math.max(max , mp.get(creators[i]).viewsCnt);            
           
        }
        List<List<String>> ans = new ArrayList<>();
        
        for(Map.Entry<String, Pair> it : mp.entrySet()){
            if(it.getValue().viewsCnt == max){
                int index = it.getValue().ind;
                List<String> temp = new ArrayList<>();
                temp.add(it.getKey());
                temp.add(ids[index]);
                ans.add(temp);
            }
        }
        return ans;               
           
    }
}