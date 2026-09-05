class Solution {
public:
    bool dfs(int node, vector<int>& visPath, vector<int> adj[],
             vector<int>& vis ,vector<int>&findOrder) {
        vis[node] = 1;
        visPath[node] = 1;
        for (auto adjNode : adj[node]) {
            if (!vis[adjNode]) {
                if (dfs(adjNode, visPath, adj, vis ,findOrder) == true)
                    return true;
            } else if (visPath[adjNode]) {
                return true;
            }
        }
        // check[node] =1;
        findOrder.push_back(node);

        visPath[node] = 0;
        return false;
    }
    vector<int> findOrder(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto it : edges) {
            adj[it[1]].push_back(it[0]);
            
        }

        vector<int> vis(V, 0);
        vector<int> visPath(V, 0);

        vector<int>check(V,0);
        vector<int>findOrder;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, visPath, adj, vis , findOrder) ){
                    return {};
                }
    
            }
        }


        reverse(findOrder.begin(), findOrder.end());
        return findOrder;
    }
};