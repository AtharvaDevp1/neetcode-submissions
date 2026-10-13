class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//     sort(nums.begin(),nums.end());
//       unordered_map<int, int> map;

//         for(auto it : nums){

//             if(map.find(it-1)!= map.end())
//             {
//                     map[it] = 1 + map[it-1];
//             }
//             else{
//                 map[it]=1;
//             }

//         }
// int soln=0;
//         for(int i=0;i<n;i++){
//          soln  = max(soln , map[nums[i]]);
//         }


        unordered_set<int> set(nums.begin(),nums.end());
        int soln=0;
         for(auto it : set)
         {
        if(set.find(it-1)==set.end()){
                int curnum = it;
                int streak = 1;

                while(set.find(it+1)!=set.end()){
                        it++;
                        streak++;
                }

    soln = max(soln , streak);
         }




         }



        return soln;
    }
};
