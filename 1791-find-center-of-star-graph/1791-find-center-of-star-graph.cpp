class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> adj;

        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int n = adj.size();
        int ans = 0;
        for(const auto &m : adj){
            if(m.second.size() == n-1){
                ans = m.first;
                break;
            }
        }

        return ans;
    }
};