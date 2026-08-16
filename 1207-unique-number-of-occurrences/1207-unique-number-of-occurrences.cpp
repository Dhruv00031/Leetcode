class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cnt = 1;
        vector<int> occ;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i - 1]){
                cnt++;
            }
            else{
                occ.push_back(cnt);
                cnt = 1;
            }
        }
        occ.push_back(cnt);

        sort(occ.begin(), occ.end());
        for(int i = 1; i < occ.size(); i++){
            if(occ[i] == occ[i - 1]){
                return false;
            }
        }
        return true;
    }
};