class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string , vector<string>> map;
  int n=strs.size();
  for(int i=0;i<n;i++){
    string sign=strs[i];
    sort(sign.begin(),sign.end());
    map[sign].push_back(strs[i]);
}

        vector<vector<string>> result;
    for(auto & x : map){
        result.push_back(x.second);
    }
    return result;

    }
};
