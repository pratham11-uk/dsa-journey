class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char , int > map;
        int n = s.size();
        for (auto it : s) map[it]++;
        vector <string> buckets(n+1, "");

        for (auto it :map) {
            int count = it.second;
            char c = it .first;
            buckets[count].push_back(c);
        }
        int index = 0 ;
        for (int j = buckets.size()-1 ; j >= 0; j--){
            for (auto it: buckets[j]){
                for (int i = 0 ; i < j ; i++){
                    s[index] = it ;
                    index++;
                }
            }
        }
        return s;
    }

};