class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //排序由小到大
        //i從0開始 用雙指針解法，重複數字跳過
        //當i > 0後，後面都不用算了 因為正數一直相加都不會為0
        
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;
            
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0){
                    left++;
                }else if (sum > 0){
                    right--;
                }else{
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left - 1]){
                        left++;
                    }
                }
            }
        }
        return res;
    }
};