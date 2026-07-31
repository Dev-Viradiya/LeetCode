class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> m;
        int cnt = 0;
        int p = 1;
        int ans = 0;

        for(int i=0;i<word.length();i++){
            m[word[i]]++;
        }

        vector<pair<char,int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](pair<char,int> &a, pair<char,int> &b){
            return a.second > b.second; 
        });

        for(int i=0;i<v.size();i++){
            ans += p*v[i].second;
            cnt++;
            if(cnt == 8){
                p++;
                cnt=0;
            }
        }

        return ans;
    }
};