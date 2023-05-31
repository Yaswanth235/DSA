//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int,int>ans;
        int i;
        int mini=INT_MAX;
        for(i=0;i<n;i++){
           ans[arr[i]]++;
        }
        int maxi=INT_MIN;
         for(auto val:ans){
            if(mini>val.second){
              mini=val.second;
            }
        }
         for(auto v:ans){
               if(v.second==mini){
                 maxi=max(maxi,v.first);
            }
        }
       return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends