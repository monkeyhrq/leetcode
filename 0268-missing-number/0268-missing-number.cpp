class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //題目給nums陣列，找出裡面缺少的數字
        // n = nums.size()，算出0~n 之間的數字 少了哪一個

         int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++){
            ans = ans ^ i ^ nums[i];   // 索引 0~n-1 和陣列裡的數一起 XOR
        }
        ans = ans ^ n;                 // 範圍是 0~n,補上最後的 n

        return ans;
    }
};