class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         string res1;
         string res2;


         for(auto x:word1){
             res1 +=x;
         }

         for(auto y:word2){
             res2 +=y;
         }

         if(res1 == res2){
             return true;
         }
         else{
             return false;
         }
    }
};