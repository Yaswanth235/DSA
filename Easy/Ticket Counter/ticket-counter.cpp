//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        deque<int>dq;
        for(int i=1;i<=N;i++){
            dq.push_back(i);
        }
        while(true){
            for(int j=1;j<=K;j++){
                 if(dq.size()>1){
                     dq.pop_front();
                }
            }
            for(int j=1;j<=K;j++){
                if(dq.size()>1){
                     dq.pop_back();
                }
            }
             if(dq.size()==1){
                return dq.back();
            }
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends