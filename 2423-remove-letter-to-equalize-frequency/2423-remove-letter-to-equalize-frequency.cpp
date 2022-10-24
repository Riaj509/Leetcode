class Solution {
public:
        
    bool solve(unordered_map<char,int> &m){
		set<int>st;
		for(auto it:m){
			if(it.second) st.insert(it.second);
		}
		if(st.size()>1) return false;
		return true;
	}
	bool equalFrequency(string word) {
		unordered_map<char,int>mpp;

		for(char c:word) mpp[c]++;

		for(char c:word){
			mpp[c]--;
			if(solve(mpp)) return true;
			mpp[c]++;
		}
		return false;
	}
};