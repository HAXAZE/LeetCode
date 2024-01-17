class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        int n = arr.size();
        std::map<int, int> m;
        
        // Count the occurrences of each element in the array
        for (auto x : arr) {
            m[x]++;
        }
        
        // Check if the count of occurrences is unique
        std::set<int> occurrenceSet;
        for (auto x : m) {
            // Check if the count has already been encountered before
            if (occurrenceSet.find(x.second) != occurrenceSet.end()) {
                return false;
            }
            
            // Add the count to the set
            occurrenceSet.insert(x.second);
        }

        return true;
    }
};
