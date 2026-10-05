class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums){
            if(x > 0){
                st.insert(x);
            }
        }
        int i = 1;
        while(true){
            if(st.find(i) == st.end()){
                return i;
            }
            i++;
        }
    }
};