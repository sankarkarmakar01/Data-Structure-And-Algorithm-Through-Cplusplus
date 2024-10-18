//LeetCode - 15

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> ans;
       vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2;i++) {
            int j = i + 1;
            int k = nums.size()-1;
            while(j<k) {
                if(nums[j] + nums[k] == -nums[i]) {
                  ans.insert({nums[i],nums[j],nums[k]});
                  j++;
                  k--;
                }
                else if(nums[j] + nums[k] < (-nums[i]))
                    j++;
                else
                    k--;
            }
        }
        for(auto trip : ans)
            output.push_back(trip);
        return output;
    }
};
