class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right){
            int h = min(height[left], height[right]);
            int width = right - left;
            ans = max(ans, width * h);

            if (height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return ans;
    }
};