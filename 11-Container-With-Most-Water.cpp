class Solution {
public:
    int maxArea(vector<int>& height) {

        int low = 0;
        int high = height.size() - 1;
        int maxi = 0;

        while (low < high) {
            int width = (high - low);
            int max_water = width * min(height[low], height[high]);

            maxi = max(max_water, maxi);
            if (height[low] < height[high]) {
                low++;
            } else {
                high--;
            }
        }

        return maxi;
    }
};