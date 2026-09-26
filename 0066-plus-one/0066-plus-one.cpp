class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = digits.size() - 1 ;
        if (digits[num] != 9) digits[num]++;
        else {
            while (num >= 0 && digits[num] ==9) {
                digits[num] = 0 ;
                num --;
            }
            if (num==-1) digits.insert(digits.begin() ,1);
            else digits[num]++;
        }
        return digits;
    }
};