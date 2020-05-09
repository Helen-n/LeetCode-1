class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int res = nums[0];
        int tmpsum = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            tmpsum = tmpsum>0 ? (tmpsum+nums[i]) : nums[i];
            res = max(res, tmpsum);
        }
        return res;
    }
};
