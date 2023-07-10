//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void bfs(vector<int>adj[], vector<int>&vis, int i){
        queue<int> q;
        q.push(i);
        vis[i]=1;
        while (!q.empty()){
            int node= q.front();
            q.pop();
            for (auto adjnode: adj[node]){
                if (!vis[adjnode]){
                    q.push(adjnode);
                    vis[adjnode]=1;
                }
            }
        }
        return;
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        int cnt=0;
        vector<int>v[V];
        for (int i=0;i<V;i++){
            for (int j=0;j<V;j++){
                if (adj[i][j]){
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bfs(v,vis,i);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends