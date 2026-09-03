class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minm = INT_MAX;
        bool odd = false;
        for(auto t : nums1){
            
            if(t % 2){
                odd = true;
                minm = min(minm,t);
            }
        }
        if(!odd) return true;
        for(int t : nums1){
            if(t % 2 == 0 && minm > t) return false;
        }
        return true;
    }
};