class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        int i = 0;
        stack<char>st;
        while(i<n){
            // we can use while loop because ek index top se aa raha hai or ek index s[i] se 
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        string ans = "";
        while(!st.empty()){
            char ele = st.top();
            st.pop();
            ans +=ele;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};