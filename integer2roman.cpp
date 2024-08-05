class Solution {
public:
    string intToRoman(int num) {
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> syb = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string roman_num = "";
        int i = 0;
        while (num > 0) {
            while (num >= val[i]) {
                roman_num += syb[i];
                num -= val[i];
            }
            i++;
        }
        return roman_num;
    }
};