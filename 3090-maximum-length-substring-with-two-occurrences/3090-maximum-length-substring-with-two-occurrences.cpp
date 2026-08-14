class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> m;
            for(int j=i;j<n;j++){
                if(m[s[j]] < 2){
                    m[s[j]]++;
                    ans = max(ans,j-i+1);
                }else{
                    break;
                }
            }

        }

        return ans;
    }
};