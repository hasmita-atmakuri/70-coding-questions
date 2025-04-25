/*Brute Force*/

class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          for(int i=0;i<=nums.size();i++){
              int flag=0;
              for(int j=0;j<nums.size();j++){
                  if(i==nums[j]){
                      flag=1;
                      break;
                  }
              }
              if(flag==0)
                  return i;
          }
          return -1;
      }
  };

/*Optimal solution*/

class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          int n=nums.size();
          int sum=(n*(n+1))/2;
          int sum1=0;
          for(int i=0;i<nums.size();i++){
              sum1+=nums[i];
          }
          int ans=sum-sum1;
          return ans;
      }
  };