class Solution {
public:
    int countHomogenous(string s) {
     const long long MOD  = 1e9+7;

        int cnt = 1;
        long long res = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                cnt++;
            } else {
                res = (res + (cnt * (cnt + 1LL) / 2) % MOD) % MOD;
                cnt = 1;
            }
        }
        res = (res + (cnt * (cnt + 1LL) / 2) % MOD) % MOD; // Handle the last homogenous substring
        return res;
    }

};