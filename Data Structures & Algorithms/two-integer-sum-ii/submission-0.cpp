class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int > soln;

int n =numbers.size();
int left = 0 , right = n-1;
    while(left < right){

        if(numbers[left]+ numbers[right] == target)
{       
        soln.push_back(left+1);
         soln.push_back(right + 1);
    break;
} 
    else if(numbers[left]+ numbers[right] < target){
            left++;
}else if(numbers[left]+ numbers[right] > target)
right --;


}

return soln;

        }
    
};
