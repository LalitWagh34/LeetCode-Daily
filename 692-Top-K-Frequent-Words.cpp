class Solution {
public:
    struct Comp{
        bool operator()(const pair<int,string>&a ,const pair<int, string>&b ){
            if(a.first ==  b.first){
                return a.second > b.second;
            }
            return a.first < b.first;
    
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string ,int>pqMap;

        for(string str:words){
            pqMap[str]++;
        }

        priority_queue<pair<int ,string> , vector<pair<int, string>>,Comp > pq;

        for(auto it:pqMap){
            pq.push({it.second , it.first});

        }
        vector<string>result;

        for(int i=0 ;i<k ;i++){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};