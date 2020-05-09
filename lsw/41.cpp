class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
       int num = 1;
        for(int index = 0 ; index < nums.size(); index++){
            if(nums[index] == num){
                num++;
                index = -1;
            }
            if(index == nums.size()-1)  break;  
        }
        return num;   
    }
};
