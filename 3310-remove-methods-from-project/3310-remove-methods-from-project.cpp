class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        unordered_map<int,vector<int>> m;
        vector<bool> visited(n,false);
        queue<int> q;

        for(int i=0;i<invocations.size();i++){
            m[invocations[i][0]].push_back(invocations[i][1]);
        }

        q.push(k);
        visited[k] = true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(auto i : m[curr]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

        vector<int> ans;
        for(int i=0;i<invocations.size();i++){
            if(visited[invocations[i][0]] == false && visited[invocations[i][1]]){
                for(int i=0;i<n;i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};