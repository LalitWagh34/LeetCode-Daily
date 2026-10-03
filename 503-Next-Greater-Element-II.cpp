class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) { 
        int n= nums.size();
        stack<int> st;

        vector<int>ans(n ,-1); 

        for(int i=2*n-1 ;i>=0 ;i--){
            int index = i%n;

            int curr  = nums[index];

            while(!st.empty() &&curr >= st.top()){
                st.pop();

            }
            if(i<n ){
                if(!st.empty()){
                    ans[i] = st.top();
                }
            }
            st.push(curr);
        }


    return ans;
    }
};