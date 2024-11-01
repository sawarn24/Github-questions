class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int cnt = 1;

        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }

            if (cnt <= 2) {
                result += s[i];
            }
        }

        return result;
    
        
    }
};