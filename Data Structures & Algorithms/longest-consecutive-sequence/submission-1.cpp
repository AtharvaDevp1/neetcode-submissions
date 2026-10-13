class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
    sort(nums.begin(),nums.end());
      unordered_map<int, int> map;

        for(auto it : nums){

            if(map.find(it-1)!= map.end())
            {
                    map[it] = 1 + map[it-1];
            }
            else{
                map[it]=1;
            }

        }
int soln=0;
        for(int i=0;i<n;i++){
         soln  = max(soln , map[nums[i]]);
        }

        return soln;
    }
};
