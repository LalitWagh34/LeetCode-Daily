class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
  

        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;

        unordered_map<int, vector<pair<int,int>>>adj;

        for(auto &vec :times){
            int u =vec[0];
            int v =vec[1];
            int w =vec[2];

            adj[u].push_back({v,w});

        }
        vector<int>result(n+1 , INT_MAX);
        result[k] = 0;
        pq.push({0 , k});

        while(!pq.empty()){
            int t = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto vec:adj[node]){
                int adjNode = vec.first;
                int time = vec.second;

                if(t+time <result[adjNode]){
                    result[adjNode] =t+time;
                    pq.push({t+time , adjNode});
                }
            }

        }
        int ans = INT_MIN;

        for(int i=1;i<=n ;i++){
            if(result[i] == INT_MAX) return -1;

            ans =max(ans ,result[i]);
        }
        return ans;

    }
};