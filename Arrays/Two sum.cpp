/*Brute Force*/

class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          int n=nums.size();
          for(int i=0;i<n-1;i++){
              for(int j=i+1;j<n;j++){
                  if(nums[i]+nums[j]==target )
                      return {i,j};
              }
          }
          return {};
      }
  };

  /*Optimal Solution*/

  class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            unordered_map<int,int> m;
            for(int i=0;i<n;i++){
                int num=nums[i];
                int a=target-num;
                if(m.find(a)==m.end()){
                    m[num]=i;
                }
                else{
                    return {m[a],i}; 
                }
            }
            return {-1,-1};
        }
    };