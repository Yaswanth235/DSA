//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfs(vector<int>adj[],int s,vector<bool>&visited,vector<int>&res){
        res.push_back(s);
        visited[s]=true;
        for(auto it:adj[s]){
            if(!visited[it]){
                dfs(adj,it,visited,res);
            }
        }
    }
    vector<int>dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res;
        vector<bool>visited(V+1,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(adj,i,visited,res);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends