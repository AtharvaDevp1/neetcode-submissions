class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n = s.size();
       int i=0;
       if(s.size()==1) return false;

        while(i<n){
            if(s[i]=='[' || s[i]=='{'  || s[i]=='('){
                stack.push(s[i]);
            }
            else{

                    if(stack.empty()){
                        return false;
                    }
                if(s[i]==']'){                   
                    if(stack.top()!='['){
                        return false;
                    }else {
                        stack.pop();
                    }
                }
                if(s[i]==')'){                  
                    if(stack.top()!='('){
                        return false;
                    }else {
                        stack.pop();
                    }
                }

                if(s[i]=='}'){  
                    if(stack.top()!='{'){
                        return false;
                    }else {
                        stack.pop();
                    }
                }

            }

    i++;
        }
        if(stack.empty())return true;
        else return false;
        
    }
};
