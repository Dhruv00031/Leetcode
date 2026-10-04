class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=n-1;
        vector<pair<int,int>>v(n);

        for(i=0;i<=n-1;i++){
            v[i].first = nums[i];
            v[i].second = i;
        }
        sort(v.begin(),v.end());

        i=0,j=n-1;
        while(i<j){
            if(v[i].first + v[j].first > target){
                j--;
            }
            else if(v[i].first + v[j].first < target){
                i++;
            }
            else
                return {v[i].second,v[j].second};
        }
        assert(false);
    }
};