class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        int left = 0;
        int maxi=0;
        vector<int> vis(26, 0);

        for (int right = 0; right < s.size(); right++) {
            vis[s[right]- 'a']++;

            while(vis[s[right] -'a'] > 1){
                vis[s[left] -'a']--;
                left++;

            }
            maxi = max(maxi , right-left+1);
            //left++;
        }
        return maxi;
    }
};