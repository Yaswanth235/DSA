//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findNumberOfTriangles(int arr[], int n){
        int ans=0;
        sort(arr,arr+n);
        for(int i=n-1;i>=2;i--){
            int low=0;
            int high=i-1;
            while(low<high){
                if(arr[low]+arr[high]>arr[i]){
                    ans+=(high-low);
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends