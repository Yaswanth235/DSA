//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
         int i=1;
         while(i<=n){
             int j=1;
             while(j<=i){
                 cout<<j<<" ";
                 j++;
             }
             cout<<endl;
             j=1;
             i++;
         }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends