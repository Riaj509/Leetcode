class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        long long int M=1e9+7;
        stack<int> st;
        int n=arr.size();
        int lft[n],ri[n];
        
        int ans=0;
        for(int i=0;i<n;i++){
            
            while(!st.empty() && arr[i]<arr[st.top()]) st.pop();
            
            if(st.size()) lft[i]=i-st.top();
            else lft[i]=i+1;
            
            st.push(i);
            
        }
        
        while(!st.empty()) st.pop();
        
        for(int i=n-1;i>=0;--i){
             while(!st.empty() && arr[i]<=arr[st.top()]) st.pop();
            
            if(st.size()) ri[i]=st.top()-i;
            else ri[i]=n-i;
            st.push(i);
        }
        
        for(int i=0;i<n;i++) {
            long long int p=(lft[i]*ri[i])%M;
            p=(p*arr[i])%M;
            p%=M;
            ans= (ans+p)%M;
        }
        
        return ans;
        
        
        
    }
};