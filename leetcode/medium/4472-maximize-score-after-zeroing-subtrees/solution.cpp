class Solution {
public:
    int maxScore(vector<int>& parent, vector<int>& op, vector<int>& score) {
        int n=parent.size();
        vector<vector<int>>adj(n);
        for(int i=1; i<n;i++){
            adj[parent[i]].push_back(i);
        }
        vector<long long> dp(n,0);
        vector<int>order;
        order.push_back(0);
        for(int i=0;i<order.size();i++){
            int u=order[i];
            for(int v: adj[u]){
                order.push_back(v);
            }
        }
        reverse(order.begin(),order.end());
        for(int u:order){
            long long sum=0;
            long long mn=LLONG_MAX;
            for(int v:adj[u]){
                sum+=dp[v];
                mn=min(mn,dp[v]);
            }
            if(adj[u].empty()){
                dp[u]=score[u];
            }
            else if(op[u]==1){
                dp[u]=score[u]+sum-mn;
            }else{
                dp[u]=score[u]+sum-min(0LL,mn);
            }
        }
        return (int)dp[0];
    }
};