class Solution {
public:
    int get_pivot(vector<int> arr, int m){

        m = arr.size();
        int s = 0;
        int e = m - 1;

        while(s < e){
            int mid = s + (e - s) / 2;
            if(arr[mid] >= arr[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }

    int bin_src(vector<int> arr, int s, int e, int key){
        int start = s;
        int end = e;

        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == key){
                return mid;
            }
            else if(arr[mid] < key){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = get_pivot(nums, n);
        if(target >= nums[pivot] && target <= nums[n -1]){
            return bin_src(nums, pivot, n - 1, target);
        }
        else{
            return bin_src(nums, 0, pivot - 1, target);
        }
    }
};