class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++){
            vector<int> seen(128);
            int j = i;
            while(j < n && !seen[s[j]]){
                seen[s[j]]++;
                j++;
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};