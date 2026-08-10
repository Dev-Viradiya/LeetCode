class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);
        if(idx == string::npos){
            return word;
        }
        string temp = word.substr(0,idx+1);
        reverse(temp.begin(),temp.end());
        string ans = temp;
        ans += word.substr(idx+1);
        return ans;
    }
};