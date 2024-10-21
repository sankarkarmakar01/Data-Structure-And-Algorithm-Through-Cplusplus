// Link:- https://www.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int count = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
                count++;
            }
        }
        return count;
    }
};
