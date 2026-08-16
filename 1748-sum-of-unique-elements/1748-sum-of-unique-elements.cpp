class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto it : mp){
            if(it.second == 1){
                sum += it.first;
            }
        }
        return sum;
    }
};