// Link - https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1

class Solution {
  public:
    int cubeRoot(int N) {
        // code here
       int start = 0;
       int end = N;
       int mid;
       while(start<=end)
       {
           mid = start + (end - start)/2;
           long long cube = (long long)mid*mid*mid;
           if(cube == N)
                return mid;
            else if(cube<N)
                start = mid + 1;
            else
                end = mid - 1;
       }
       return start-1;
    }
};
