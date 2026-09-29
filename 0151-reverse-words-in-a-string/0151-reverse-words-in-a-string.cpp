class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n = s.size();
        string ans;
        for (int i = 0 ; i< n ; i++){
            string word="";
            while (i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if (word.size()>0) {
                if(!ans.empty()) ans+= " ";
                ans += word;
            }
        }
        return ans;
    }
};