class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
int n= nums.size();
set<vector<int>> hashset;
            sort(nums.begin(),nums.end());
            int i=0;
            while(i<n){
                    int left = i+1,right=n-1;
                while(left<right){

                    if(nums[i] + nums[left] + nums[right]==0){
   hashset.insert({nums[i],nums[left],nums[right]});
   left++;
   right--;
   }
                  else if(nums[i] + nums[left] + nums[right] < 0){
                                left++;
                    }
                    else if(nums[i] + nums[left] + nums[right] > 0){
                               right--;
                    }
                }

i++;
            } 

            vector<vector<int>>v(hashset.begin(), hashset.end());
        return v;
    }
};
