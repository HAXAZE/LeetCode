class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);
        if(index !=-1){
            return index;
        }
        return -1;
    }
};