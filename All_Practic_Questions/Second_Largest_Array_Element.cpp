class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int ans = arr[0];
         int second = -1;
        for(int i =0;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                ans = arr[i];
            }
        }
       
        for(int i =0;i<arr.size();i++)
        {
            if(arr[i]>second && ans!=arr[i])
            {
                second = arr[i];
            }
        }
       return second;
    }
};
