class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int, int>mp ;
        mp[0] =1;

        for(int n :nums){
            unordered_map<int,int>temp;

            for(const auto& [total , count]:mp){
                temp[total+n] += count;
                temp[total-n] += count;
            }

            mp =temp;
        }

        return mp[target];
    }
};