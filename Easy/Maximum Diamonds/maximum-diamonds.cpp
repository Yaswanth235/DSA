//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[],int N,int K) {
         long long x=0;
         priority_queue<int>p;
         for(int i=0;i<N;i++){
              p.push(A[i]);
        }
        int c=0;
        while(K>0){
            int d=p.top();
            p.pop();
            x+=d;
            p.push(d/2);
            K--;
        }
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends