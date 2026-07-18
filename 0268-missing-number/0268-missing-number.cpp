class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //題目給nums陣列，找出裡面缺少的數字
        // n = nums.size()，算出0~n 之間的數字 少了哪一個

        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            int count = 0;
            if (i != nums[i]){
                return i;
            }
        }
        return n;
    }
};