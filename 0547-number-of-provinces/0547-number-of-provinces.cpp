class Solution{
public:
    void dfs(int node,vector<vector<int>>& isConnected,vector<bool>&visit){
        visit[node] = true;
        for(int i = 0;i<isConnected.size();i++){
            if(isConnected[node][i] && !visit[i]){
                dfs(i,isConnected,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected){
        int n  = isConnected.size();
        int numberofComponents = 0;
        vector<bool>visit(n);
        for(int i =0;i<n;i++){
            if(!visit[i]){
                numberofComponents++;
                dfs(i,isConnected,visit);
            }
        }
        return numberofComponents;
    }
};