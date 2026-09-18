class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        int left = 0;
        int maxi=0;
        vector<int> vis(256, 0);

        for (int right = 0; right < s.size(); right++) {
            vis[s[right]]++;

            while(vis[s[right] ] > 1){
                vis[s[left] ]--;
                left++;

            }
            maxi = max(maxi , right-left+1);
            //left++;
        }
        return maxi;
    }
};