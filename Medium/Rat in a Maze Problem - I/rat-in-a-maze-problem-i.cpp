//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(vector<vector<int>> &m, int n, int i, int j, vector<string>& ans, string output){
        if(i==n-1&&j==n-1){
            ans.push_back(output); 
            return;
        }
        m[i][j]=0;
        if(i-1>=0&&m[i-1][j]==1)solve(m,n,i-1,j,ans,output+'U'); 
        if(j-1>=0&&m[i][j-1]==1)solve(m,n,i,j-1,ans,output+'L');
        if(i+1<n&&m[i+1][j]==1)solve(m,n,i+1,j,ans,output+'D');
        if(j+1<n&&m[i][j+1]==1)solve(m,n,i,j+1,ans,output+'R');
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>>&m,int n){
        vector<string> ans;
        if(m[0][0]==0)return ans;
        string output;
        int i=0,j=0;
        solve(m,n,i,j,ans,output);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends