class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<pair<int ,pair<int,int>>>q;

        unordered_map<int ,vector<pair<int, int>>> adj;

        for(auto &vec:flights){
            int u =vec[0];
            int v =vec[1];
            int w =vec[2];

            adj[u].push_back({v,w});

        }

        vector<int>result(n , 1e9);
        // result[src] = 0;
        q.push({0 , { src ,0}});

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            if(stops > k) continue;

            for(auto it:adj[node]){
                int adjNode = it.first;
                int edge = it.second;

                if(cost + edge < result[adjNode] &&stops<=k){
                    result[adjNode] = cost + edge;
                    q.push({stops + 1, {adjNode, cost + edge}});
                }
            }
        }
        if(result[dst] == 1e9) return -1;  // Unreachable within K stops
        return result[dst];

    }
};