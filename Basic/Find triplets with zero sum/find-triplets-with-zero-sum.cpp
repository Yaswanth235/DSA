//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    bool findTriplets(int arr[],int n){
         set<int>mp;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(mp.find(-(arr[i]+arr[j]))!=mp.end()){
                   return true;
               }
           }
           mp.insert(arr[i]);
       }
       return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends