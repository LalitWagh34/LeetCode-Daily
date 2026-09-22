class Solution {
public:


    bool dfs(int node , vector<int>&visPath , vector<int>adj[] , vector<int>&path){
        path[node] =1;
        visPath[node] =1;

        for(auto adjNode:adj[node]){
            if(!path[adjNode]){
                if(dfs(adjNode, visPath , adj, path) == true)
                    return true;
            }else if(visPath[adjNode]){
                return true;
            }
        }
        visPath[node] =0;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& edges) {

        vector<int>adj[V];

        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
        }

        vector<int>path(V ,0);
        vector<int>visPath(V ,0);

        for(int i=0;i<V;i++){
            if(!path[i]){
                if(dfs(i , visPath , adj , path) == true){
                    return false;
                }
            }
        }
        return true;


    }
};