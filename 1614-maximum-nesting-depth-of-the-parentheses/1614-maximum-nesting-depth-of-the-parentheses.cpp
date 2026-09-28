class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int balance = 0;
        for (auto it: s){
            if (it == '(') balance++;
            else if (it == ')') balance--;
            ans = max (ans , balance);
        }
        return ans;
    }
};