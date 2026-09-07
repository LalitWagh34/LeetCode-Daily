class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        // int m = grid[0].size();
        
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;

        // vector<vector<int>>vis(n , vector<int>(m , -1));
        // vis[]

        int drow[] ={-1 ,-1,-1 ,0 , 0 , 1,1,1};
        int dcol[] = {-1,0,1,-1,1,-1,0,1};

        queue<pair<int ,int>>q;
        q.push({0,0});
        grid[0][0] =1;
        while(!q.empty()){
            int row =q.front().first;
            int col =q.front().second;

            q.pop();
            int dist = grid[row][col];

            if(row == n-1 && col== n-1) return dist;
            
            for(int i=0;i<8 ;i++){
                int nrow = row +drow[i];
                int ncol = col + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol< n && grid[nrow][ncol] ==0 ){
                    grid[nrow][ncol] = dist+1;

                    q.push({nrow ,ncol});
                }
            }

        }
        return -1;
    }
};