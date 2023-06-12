//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends

class Solution{
    public:
    void solve(vector<string>&v,int n,int oc,int cc,string s){
        if(oc==n&&cc==n){
            v.push_back(s);
            return;
        }
        if(oc<n){
            solve(v,n,oc+1,cc,s+'(');
        }
        if(cc<oc){
            solve(v,n,oc,cc+1,s+')');
        }
    }
    vector<string>AllParenthesis(int n){
        vector<string>v;
        int oc=0,cc=0;
        string s="";
        solve(v,n,oc,cc,s);
        return v;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends