class Solution {
public:
// This question is based on MATRIX CHAIN MULTIPLICATION
    unordered_map<string,bool>mp;
    bool solve(string s1,string s2){
        if(s1.compare(s2)==0){
            return true;
        }
        if(s1.length()<=1){
            return false;
        }
        string key = s1;
        key.push_back('_');
        key.append(s2);
        if(mp.find(key)!=mp.end()){
            return mp[key];
        }
        int n = s1.size();
        bool flag = false;
        for(int i = 1;i<=n-1;i++){
            bool cond1 = solve(s1.substr(0,i),s2.substr(n-i,i)) == true && solve(s1.substr(i,n-1),s2.substr(0,n-i))== true;
            bool cond2 = solve(s1.substr(0,i),s2.substr(0,i)) == true && solve(s1.substr(i,n-1),s2.substr(i,n-i))== true;
if(cond1 || cond2){
    flag = true;
    break;
}
        }
        mp[key] =  flag;
        return flag;
    }
    bool isScramble(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(m == 0 && n == 0 ){
            return true;
        }
        if(n!=m){
            return false;
        }
        bool ans = solve(s1,s2);
        return ans;
    }
};