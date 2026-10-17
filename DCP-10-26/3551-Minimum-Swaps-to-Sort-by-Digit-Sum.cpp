class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<array<int, 3>>arr(n);

        for(int i=0 ;i<n ;i++){
            int s=0 ;int num = nums[i];

            while(num>0){
                s+= num % 10;
                num/=10;
            } 
            arr[i] = {s , nums[i] ,i};
        }
        sort(arr.begin() ,arr.end());

        vector<bool> vis(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] || arr[i][2] == i) continue;
            int j = i, len = 0;
            while (!vis[j]) {
                vis[j] = true;
                j = arr[j][2];
                len++;
            }
            swaps += len - 1;
        }
        return swaps;

    }
};