class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Brute force
int n=nums.size();
 unordered_map<int,int> map;
for(int i=0;i<n;i++){
    map[nums[i]]+=1;
}

    vector<vector<int>> v(n+1);
    for(auto  & it : map){
            v[it.second].push_back(it.first);
    }
    vector<int> soln;

    for(int i=v.size()-1;i>=0 && soln.size()<k ; i--){
        for(auto & it: v[i]){
            soln.push_back(it);
            if(soln.size()>=k) break;
        }
    }
       
return soln;
        
    }
};
