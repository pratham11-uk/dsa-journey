class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char , int > mpp1;
        vector <pair<int , char >> mpp2;
        for (auto it : s) mpp1[it]++;
        for (auto it : mpp1) mpp2.push_back({it.second,it.first});
        sort (mpp2.rbegin(),mpp2.rend());
        int index =  0 ;
        for (auto it : mpp2){
            int count = it.first;
            char c = it.second;
            for (int i = 0 ; i< count ;i++){
                s[index] = c;
                index++;
            }
        }
        return s; 
    }
};