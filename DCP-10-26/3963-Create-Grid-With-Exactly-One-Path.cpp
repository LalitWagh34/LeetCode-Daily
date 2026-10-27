class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // vector<char>stringS(m ,vector<char>(n , '#'));
        vector<string> grid(m, string(n, '#'));
        
        // vector<int>
        for(int i=0 ;i< m ;i++){
            grid[i][0]='.';
        }
        for(int i=0 ;i< n ;i++){
            grid[m-1][i]='.';
        }
        return grid;
    }
};