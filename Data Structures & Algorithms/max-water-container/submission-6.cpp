class Solution {
public:
    int maxArea(vector<int>& h) {
        int soln = 0;
       int n = h.size()  ;
    //   for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //             soln = max(soln,min(h[j],h[i])*(j-i));
    //     }
    //   }

    int left = 0;
    int right  = n-1;

    while(left<right){
            
 soln = max(soln,min(h[left],h[right])*(right-left));


        if(h[left]<=h[right]){
                left++;
        }else if(h[right]<h[left]){
                right--;
        }
  

    }
      return soln;
    }
};
