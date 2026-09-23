class Solution {
public:

    string encode(vector<string>& strs) {
        string strg="";
        for(auto & s:strs){
            strg+=to_string(s.size()) + "#" + s;
        }
        return strg;

    }

    vector<string> decode(string s) {
        vector<string> soln;
        int i=0;
        while(i< s.size()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));
            soln.push_back(s.substr(j+1,len));
            i=j+1+len;

        }
        return soln;

    }
};
