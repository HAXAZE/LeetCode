class Solution {
public:
string solve(string& s, int k, int n){
        if(k<0){
            return "0";
        }
        long long int curr=0;
        string ans=""; 
        char last;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                curr++;
                last=s[i];
                if(k==curr){
                    return ans+s[i];
                }
            }else{
                int dig=s[i]-'0';
                if(k>curr*dig){
                    curr=curr*dig;
                }else if(k==curr*dig){
                    return ans+last; 
                }else{
                    curr=curr*(k/curr);
                    if(k-curr==0){
                        return ans+last;
                    }
                    return solve(s,k-curr,i);
                }
            }
        }
        return "0";
    }
    string decodeAtIndex(string s, int k) {
                return solve(s,k,s.length());

    }
};