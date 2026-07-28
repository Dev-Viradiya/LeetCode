class Solution {
public:
    string smallestPalindrome(string s) {
        string ans = "";
        int n = s.size();
        if(n==1){
            return s;
        }
        if(n % 2 == 0){
            string temp = s.substr(0,n/2);
            sort(temp.begin(),temp.end());
            ans += temp;
            reverse(temp.begin(),temp.end());
            ans += temp;
        }else{
            char middle = s[n/2];
            string temp = s.substr(0,n/2);
            sort(temp.begin(),temp.end());
            ans += temp;
            ans += middle;
            reverse(temp.begin(),temp.end());
            ans += temp;
        }
        return ans;
    }
};