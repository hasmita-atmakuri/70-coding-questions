// Brute Force
class Solution {
  public:
      vector<int> findDisappearedNumbers(vector<int>& nums) {
          
          vector<int> ans;
          for(int i=1;i<=nums.size();i++){
              int flag=0;
              for(int j=0;j<nums.size();j++){
                  if(nums[j]==i){
                      flag=1;
                      break;
                  }
              }
              if(flag==0)
                  ans.push_back(i);
          }
          return ans;
      }
  };

// Optimal solution 1(using binary search)
class Solution {
  public:
      bool binarySearch(vector<int> a,int l,int h,int tar){
              while(l<h){
                  int m=(l+h-1)/2;
                  if(a[m]==tar)
                      return true;
                  else if(a[m]<tar)
                      l=m+1;
                  else
                      h=m-1;
              }
              return false;
          }
      vector<int> findDisappearedNumbers(vector<int>& nums) {
          sort(nums.begin(),nums.end());
          vector<int> ans;
          for(int i=1;i<=nums.size();i++){
              if(!binarySearch(nums,0,nums.size()-1,i)){
                  ans.push_back(i);
              }
          }
          return ans;
          
      }
  };

// Optimal solution 2(using swapping)
class Solution {
  public:
      vector<int> findDisappearedNumbers(vector<int>& nums) {
          vector<int> ans;
          for(int i=0;i<nums.size();i++){
              while(nums[nums[i]-1]!=nums[i])
                  swap(nums[nums[i]-1],nums[i]);
          }
          for(int i=0;i<nums.size();i++){
              if(nums[i]!=i+1)
                  ans.push_back(i+1);
          }
          return ans;
      }
  };

// Optimal solution 3(using negative numbers)

class Solution {
  public:
      vector<int> findDisappearedNumbers(vector<int>& nums) {
          for(int i=0;i<nums.size();i++){
              int ind=abs(nums[i])-1;
              nums[ind]=-abs(nums[ind]);
          }
          vector<int> ans;
          for(int i=0;i<nums.size();i++){
              if(nums[i]>0)
                  ans.push_back(i+1);
          }
          return ans;
      }
  };