class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int>st(nums.begin() ,nums.end());
        int longest =1;

        for(int n:st){
            if(st.find(n -1) == st.end()){
                int CurrNum = n ;
                int streak =1;

                while(st.find(CurrNum+1) != st.end()){
                    CurrNum++;
                    streak++;
                }

            longest = max(longest ,streak);

            }

        }

        return longest;

    }
};