class Solution {
public:
    void bfs(int node ,vector<vector<int>>&adj , vector<int>&vis){
        int n = adj.size();
        queue<int>q;
        q.push(node);
        vis[node] =1;

        while(!q.empty()){
            int node =q.front();
            q.pop();

            for(int i=0 ;i< n;i++){
                if(!vis[i] && adj[node][i] == 1){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();


        vector<int> vis(n, 0);
 
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count++;
                bfs(i, adj, vis);
            }
        }

        return count;
    }
};