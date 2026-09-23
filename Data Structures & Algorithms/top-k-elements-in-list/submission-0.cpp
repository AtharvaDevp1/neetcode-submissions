class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Brute force
int n=nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]+=1;
        }

        vector<vector<int>> v;

        for(auto & it : map){
            v.push_back({it.first,it.second});
        }

        for(int i=0;i<v.size();i++){
           for(int j=i+1;j<v.size();j++){
            if(v[i][1]<v[j][1]){
                swap(v[i][1],v[j][1]);
                 swap(v[i][0],v[j][0]);
            }
           }
        }
        vector<int> soln;

        for(int i=0;i<k;i++){
            soln.push_back(v[i][0]);
        }
return soln;
        
    }
};
