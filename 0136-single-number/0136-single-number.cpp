class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //陣列裡 數字都出現兩次，找出唯一出現一次的數
        //方法2 互斥或互消，兩個一樣的^會被消除，剩下一個就是答案
        const int n = nums.size();
        int ans = nums[0];
        for (int i = 1; i < n; i++){
            ans = ans ^ nums[i];
        }
        return ans;
        
        /*
        //方法1 兩個迴圈把i = 0 j = 0 從頭數到尾 只數到一次的會是答案
        
        
        for(int i = 0; i < n; i++){
            int count = 0;
            for (int j = 0; j < n; j++){
                if (nums[i] == nums[j]){
                    count++;
                }
            }

            if (count == 1){
                return nums[i];
            }
        }
        return {};
        */
    }
};