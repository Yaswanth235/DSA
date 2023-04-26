//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int>sortA1ByA2(vector<int>A1,int N,vector<int>A2,int M){
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<N;i++)mp[A1[i]]++;
        for(int i=0;i<M;i++){
            while(mp[A2[i]]!=0){ 
                v.push_back(A2[i]); 
                mp[A2[i]]--; 
            }
        }
        for(auto x:mp){
            while(x.second>0){
                v.push_back(x.first); 
                x.second--;
            }
        }
        return v;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends