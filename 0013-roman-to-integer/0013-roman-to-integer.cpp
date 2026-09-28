class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int prev = 0;
        for (int i = s.size()-1 ; i>= 0;i--){
            if (s[i] == 'I'){
                if (prev == 5 || prev== 10) ans --;
                else {
                    ans++;
                    prev = 1;
                }
            }
            else if (s[i] == 'V') {
                ans+=5;
                prev = 5;
            }
            else if (s[i] == 'X'){
                if (prev == 100 || prev == 50) ans-=10;
                else {
                    ans+= 10;
                    prev = 10;
                }
            }
            else if (s[i]=='L') {
                ans+=50;
                prev = 50;
            }
            else if (s[i]=='C'){
                if (prev == 500 || prev == 1000) ans-=100;
                else {
                    ans+= 100;
                    prev = 100;
                }
            }
            else if (s[i]=='D') {
                ans+= 500;
                prev = 500;
            }
            else if (s[i]=='M') {
                ans+= 1000;
                prev = 1000;
            }
        }
        return ans;
    }
};