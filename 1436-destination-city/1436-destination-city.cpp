class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>hasoutgoing;
        for(int i = 0;i<paths.size();i++){
            hasoutgoing.insert(paths[i][0]);
        }
        for(int i = 0;i<paths.size();i++){
            string candidate = paths[i][1];
            if(hasoutgoing.find(candidate)==hasoutgoing.end()){
                return candidate;
            }
        }
        return " ";
    }
};