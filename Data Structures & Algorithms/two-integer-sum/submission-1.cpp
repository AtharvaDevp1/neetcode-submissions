class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int , int> map;
       vector<int> soln;
int n = nums.size();

        for(int i=0;i<n;i++){

           int  k = target - nums[i];

           if(map.find(k)!=map.end()){
            
            soln.push_back(map[k]);
            soln.push_back(i);
           }

           map[nums[i]]=i;
        }
        return soln;
    }
};
