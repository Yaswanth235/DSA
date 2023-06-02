//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Node{
public:
    int data;
    Node*left;
    Node*right;
    
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
class Solution {
  public:
    Node*build(int arr[],int &i,int bound,int N){
        if(i==N||arr[i]>bound)return NULL;
        Node*root=new Node(arr[i++]);
        root->left=build(arr,i,root->data,N);
        root->right=build(arr,i,bound,N);
        return root;
    }
    void leaves(Node*root,vector<int>&v){
         if(root==NULL)return;
         if(root->left==NULL&&root->right==NULL){
            v.push_back(root->data);
        }
        leaves(root->left,v);
        leaves(root->right,v);
    }
    vector<int>leafNodes(int arr[],int N){
          int i=0;
          Node*res=build(arr,i,INT_MAX,N);
          vector<int>v;
          leaves(res,v);
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
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends