class Solution {
public:
    int memo(int index,vector<string>&ans,vector<string>&arr,unordered_map<string,int>&mp)
    {
        if(index>=arr.size()) return 0;
// we can't take only 'u' from "ue" 
        string curr = "";
        for(auto &val:ans) curr+=val;
        if(mp.find(curr)!=mp.end()) return mp[curr];

        ans.push_back(arr[index]);
        unordered_map<char,int>m;
        for(int i = 0;i<ans.size();i++)
        {
            for(int j = 0;j<ans[i].size();j++) m[ans[i][j]]++;
        }
        bool flag = 1;
        for(auto &val:m)
        {
            if(val.second>1)
            {
                flag = 0;
                break;
            }
        }
            int opt1 = 0,opt2=0;
            if(flag) opt1 = arr[index].size()+memo(index+1,ans,arr,mp);
            ans.pop_back();
            opt2 = memo(index+1,ans,arr,mp);

            return mp[curr]=max(opt1,opt2);
    }
    int maxLength(vector<string>& arr) {
     unordered_map<string,int>mp;
     vector<string>ans;
     return memo(0,ans,arr,mp);
    }
};