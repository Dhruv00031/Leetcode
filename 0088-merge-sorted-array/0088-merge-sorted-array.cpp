class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
        vector<int> a3(m + n);
        int i = 0, j = 0, k = 0;
        
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                a3[k] = nums1[i];
                k++;
                i++;
            }
            else{
                a3[k] = nums2[j];
                k++;
                j++;         
            }
        }
        
        while(i < m){
            a3[k] = nums1[i];
            k++;
            i++;
        }
        
        while(j < n){
            a3[k] = nums2[j];
            k++;
            j++;               
        }

        nums1 = a3;
    }
};