//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
         const int m=1e9+7;
        vector<long long int>dp(N+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<N+1;i++){
            dp[i]=(dp[i-1]+dp[i-2])%m;
        }
        long long int sum=0;
        for(int i=0;i<=N;i++){
            sum=(sum+dp[i])%m;
        }
     return sum%m;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends