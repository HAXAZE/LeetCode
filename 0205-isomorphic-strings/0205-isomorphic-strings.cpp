class Solution {
public:
    bool isIsomorphic(string s, string t) {
       vector<int>s1(10000,0);
       vector<int>t1(10000,0);
       int l = s.length();
       if(l !=t.length()){
        return false;
       }
       for(int i =0;i<l;i++){
        if(s1[s[i]]!=t1[t[i]]){
            return false;
        }
        s1[s[i]]=i+1;
        t1[t[i]]=i+1;
       }
       return true;
    }
};