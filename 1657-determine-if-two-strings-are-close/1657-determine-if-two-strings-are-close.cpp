class Solution {
public:
    bool closeStrings(string word1, string word2) {
//     1. length should be same of both
//     2. all char count should be min 1 in both the string
        
        if(word1.length()!=word2.length()){
            return false;
        }
        
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        
        for(auto x:word1){
            m1[x]++;        
        }
        for(auto x:word2){
            m2[x]++;    
        }
        
        vector<int>count;
        vector<int>count1;
        
        vector<char>ch1;
        vector<char>ch2;
        
        for(auto it:m1){
            count.push_back(it.second);
            ch1.push_back(it.first);
        }
        for(auto it:m2){
            count1.push_back(it.second);
            ch2.push_back(it.first);
        }
        
        sort(count.begin(),count.end());
        sort(count1.begin(),count1.end());
        sort(ch1.begin(),ch1.end());
        sort(ch2.begin(),ch2.end());
        
        return(count == count1 && ch1 == ch2);
    }
};