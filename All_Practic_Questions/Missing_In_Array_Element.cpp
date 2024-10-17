class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        int sum = 0;
        for(int i : arr)
        {
            sum += i;
        }
        int ans = n*(n+1)/2;
        return ans - sum;
    }
};
