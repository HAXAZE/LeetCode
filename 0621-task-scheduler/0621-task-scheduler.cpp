class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26]={0};
        for(char task:tasks){
            freq[task-'A']++;
        }
        sort(begin(freq),end(freq));
        int chunk = freq[25]-1;
        int ideal = chunk * n;

        for(int i = 24;i>=0;i--){
            ideal -=min(chunk,freq[i]);
        }
        return ideal<0 ?tasks.size():tasks.size()+ideal;
    }
};