class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dup;
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto it : mp){
            if(it.second > 1){
                dup.push_back(it.first);
            }
        }
        return dup;
    }
};