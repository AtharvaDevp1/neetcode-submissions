class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
int n= nums.size();
// set<vector<int>> hashset;
  vector<vector<int>>v;
            sort(nums.begin(),nums.end());
            int i=0;
            while(i<n){
                if(i>0 && nums[i]==nums[i-1]) {i++;continue;}
                    int left = i+1,right=n-1;
                while(left<right){

                    if(nums[i] + nums[left] + nums[right]==0){
   v.push_back({nums[i],nums[left],nums[right]});
   left++;
   right--;
   

                  while(left < right && nums[left] == nums[left-1]) left++;   
                while(left < right && nums[right] == nums[right+1]) right--;
            } else if(nums[i] + nums[left] + nums[right]< 0){
                left++;
            } else {
                right--;
            }
                }

i++;
            } 

       //     vector<vector<int>>v(hashset.begin(), hashset.end());
        return v;
    
    }
};
