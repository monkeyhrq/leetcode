class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // 一串數字[-2,1,-3,4,-1,2,1,-5,4]，取出相加後最大的數 不能跳著加，要連續
        //                 [4,-1,2,1]
        //如果下一個數字+目前數字 比下一個數字低，那我直接選下一個數字
        //每一次加減完 都把最大的數更新到ans
        int curSum = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curSum = max(nums[i] + curSum, nums[i]);
            ans = max(ans, curSum);
        }
        return ans;
    }
};