class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& heights,
             vector<vector<bool>>& ocean) {
        int n = heights.size();
        int m = heights[0].size();

        ocean[r][c] = 1;

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nr = dr[i] + r;
            int nc = dc[i] + c;

            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;

            if (ocean[nr][nc])
                continue;

            // Reverse water flow
            if (heights[nr][nc] >= heights[r][c]) {
                dfs(nr, nc, heights, ocean);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> pacific(n, vector<bool>(m, false));
        vector<vector<bool>> atlantic(n, vector<bool>(m, false));
        // pacific =top + left
        for(int c = 0; c < m; c++) {
            dfs(0, c, heights, pacific);
        }

        for(int r = 0; r < n; r++) {
            dfs(r, 0, heights, pacific);
        }

        // Atlantic: bottom + right
        for(int c = 0; c < m; c++) {
            dfs(n - 1, c, heights, atlantic);
        }

        for(int r = 0; r < n; r++) {
            dfs(r, m - 1, heights, atlantic);
        }

        vector<vector<int>> ans;

        for(int r = 0; r < n; r++) {
            for(int c = 0; c < m; c++) {

                if(pacific[r][c] &&
                   atlantic[r][c]) {

                    ans.push_back({r, c});
                }
            }
        }

        return ans;
    }
};