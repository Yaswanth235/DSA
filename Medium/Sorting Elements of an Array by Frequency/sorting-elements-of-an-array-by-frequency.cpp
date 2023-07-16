//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
{
    if(a.second==b.second)
        return b.first > a.first;
    return a.second > b.second;
}
    
    
    vector<int> sortByFreq(int arr[],int n)
    {
        int i,count=0,j;
        vector<int> ans;
        vector<pair<int,int>> v;
        unordered_map <int,int> m;
        
        for(i=0;i<n;i++)
            m[arr[i]]++;

        for(auto it=m.begin();it!=m.end();it++)
            v.push_back({it->first,it->second});
            
        sort(v.begin(),v.end(),cmp);
        
        for(i=0;i<v.size();i++)
            for(j=0;j<v[i].second;j++)
                ans.push_back(v[i].first);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends