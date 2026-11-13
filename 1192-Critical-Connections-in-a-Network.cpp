class Solution {
    int timer = 0;
    vector<int> disc, low;
    vector<vector<int>> adj;
    vector<vector<int>> bridges;

    void dfs(int u , int parent){
        disc[u] = low[u] = timer++;

        for(int v :adj[u]){
            if (v == parent) continue;

            if(disc[v] == -1){
                dfs(v , u);

                low[u] = min (low[u] , low[v]);

                if(low[v] > disc[u]){
                    bridges.push_back({u ,v});
                }
            }else{
                low[u] = min(low[u], disc[v]);
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        disc.assign(n ,-1);
        low.assign(n , -1);

        for(const auto& edge:connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);

        }

        dfs(0 , -1);

        return bridges;
        
    }
};