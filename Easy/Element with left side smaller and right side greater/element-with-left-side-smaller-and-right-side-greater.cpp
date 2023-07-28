//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    bool pmax = false;
        int max=arr[0];
        for(int i=1;i<n-1;i++){
            
            if(arr[i]>=max && !pmax){
                
                max = arr[i];
                pmax=true;
            }
         if(arr[i]>arr[i+1]){
                pmax=false;
            }
            
            
        }
        
        if(!pmax) return -1;
        
        return max;
}