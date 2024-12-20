//LeetCode - 34

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int first,last,mid;
        first = last = -1;
        vector<int> ans(2);
        while(start<=end) {
            mid = start + (end - start)/2;
            if(nums[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid]<target) {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        start = 0;
        end = nums.size()-1;
        while(start<=end) {
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};
