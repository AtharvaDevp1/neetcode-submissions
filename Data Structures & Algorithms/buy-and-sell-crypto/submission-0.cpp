class Solution {
public:
    int maxProfit(vector<int>& prices) {
int max1=0;
        int n = prices.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){

                    if(prices[j]-prices[i] > 0){
                        max1 = max(max1 ,prices[j]-prices[i] );
                    }
            }
        }
        return max1;
        
    }
};
