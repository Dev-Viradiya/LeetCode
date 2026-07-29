class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int cnt = 0;
        vector<int> ans;

        for(int i=0;i<queries.size();i++){
            for(int j=0;j<points.size();j++){
                float x = (queries[i][0]-points[j][0]) * (queries[i][0]-points[j][0]);
                float y = (queries[i][1]-points[j][1]) * (queries[i][1]-points[j][1]);
                float dis = sqrt(x+y);
                if(dis <= queries[i][2]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
            cnt = 0;
        }

        return ans;
    }
};