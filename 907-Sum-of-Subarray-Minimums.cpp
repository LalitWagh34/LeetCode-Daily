class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>st;
        int n= arr.size();
        long long total = 0;
        int MOD =1e9+7;

        for(int i=0 ;i<=n ;i++){
            while(!st.empty() && (i== n || arr[st.top()] >= arr[i])){
                int mid = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int right = i;

                long long count = 1LL*(mid- left) * (right -mid);
                total = (total + (arr[mid] *count)%MOD)%MOD; 
            }
            st.push(i);
        }

        return total;
    }
};