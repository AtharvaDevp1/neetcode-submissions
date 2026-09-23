class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
   
   
    int n=nums.size();
    vector<int> soln;
int totp=1;
int z_count=0;
int z_ind=-1;


      for(int i=0;i<n;i++){
        if(nums[i]==0){
            z_count+=1;
            z_ind=i;
        }
        totp*=nums[i];
      }

      if(z_count==0){
        for(int i=0;i<n;i++)
        {
            soln.push_back(totp/nums[i]);
        }
      }else if(z_count > 1){
        for(int i=0;i<n;i++){
            soln.push_back(0);
        }
      }else if(z_count==1){
        int z_prod=1;
        for(int i=0;i<n;i++){
            if(i==z_ind) continue;
                z_prod*=nums[i];
        }

        for(int i=0;i<n;i++){
            if(i ==  z_ind){
                soln.push_back(z_prod);
            }else{
                soln.push_back(0);
            }
        }
       

      }
      return soln;

    
        


}
        
    
};
