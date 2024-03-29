//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


// } Driver Code Ends

class Solution{
  public:
    TNode* solve(LNode *Lhead,LNode *Rhead){
          if(Lhead==Rhead){
                return NULL;
          }
        LNode*slow=Lhead,*fast =Lhead;
        while(fast!=Rhead&&fast->next!=Rhead){
               slow=slow->next;
               fast=fast->next->next;
        }
          TNode*root=new TNode(slow->data);
          root->left=solve(Lhead,slow);
          root->right=solve(slow->next,Rhead);
          return root;
          
    }
    TNode* sortedListToBST(LNode *head) {
         if(head==NULL)return NULL;
         if(head->next==NULL){
             TNode* root=new TNode(head->data);
             return root;
         }
         return solve(head,NULL);
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

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}

// } Driver Code Ends