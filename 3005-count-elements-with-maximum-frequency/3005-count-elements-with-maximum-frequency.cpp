class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        map<int,int>m;;
//         counting frequencies
        for(int i =0;i<n;i++){
            m[nums[i]]++;
        }
        
        int maxfreq = 0;
        for(auto it =m.begin(); it!=m.end();it++ ){
            maxfreq = max(maxfreq,it->second);
        }
        
        int count = 0;
        for(auto it = m.begin();it!=m.end();it++){
            if(it->second== maxfreq){
                count+= it->second;
            }
        }
        return count;
    }
};


     