class Solution {
public:
    string reverseWords(string s) {
           int start = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' || i == s.length() - 1) {
                int end = (i == s.length() - 1 && s[i] != ' ') ? i + 1 : i;
                while (start < end) {
                    std::swap(s[start], s[end - 1]);
                    start++;
                    end--;
                }
                start = i + 1;
            }
        }
        
        return s;
    }
};