class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int x : arr){
            mp[x]++;
        }
        vector<int> occ;
        for(auto it : mp){
            occ.push_back(it.second);
        }
        for(int i = 0; i < occ.size(); i++){
            for(int j = i + 1; j < occ.size(); j++){
                if(occ[i] == occ[j]){
                    return false; 
                }
            }
        }
        return true;
    }
};