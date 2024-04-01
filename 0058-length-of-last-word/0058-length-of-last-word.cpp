class Solution {
public:
    int lengthOfLastWord(string s) {
     bool hua = false;
        int cnt = 0;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                cnt++;
                hua = true;
            }
            else if(hua == true){
                break;
            }
        }
        return cnt;
    }
};