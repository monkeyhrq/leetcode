class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++){
            seen[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if (seen.count(need) && seen[need] != i){
                return {seen[need], i};
            }
        }
        return {};
    }
};