class Solution {
public:
    int maxArea(vector<int>& height) {
        //雙指針解
        //面積= 底*高，水最高只會裝到 兩條線裡面 比較低的那根線
        //每一次算完 移動比較低的線，水才有可能越裝越高 
        
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            int width = right - left;
            ans = max(ans, width * h);

            if (height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};