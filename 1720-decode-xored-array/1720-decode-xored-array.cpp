class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>deco;
        deco.push_back(first);
        deco.push_back(first^encoded[0]);
        
        for(int i=1;i<encoded.size();++i){
            deco.push_back(encoded[i]^deco.back());
        }
        return deco;
    }
};