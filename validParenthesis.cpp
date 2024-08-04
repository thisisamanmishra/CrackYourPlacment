class Solution {
public:
    bool isValid(string s) {
        string temp;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                temp += c;
            } else {
                if (temp.empty()) return false;
                char top = temp.back();
                temp.pop_back();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return temp.empty();
    }
};