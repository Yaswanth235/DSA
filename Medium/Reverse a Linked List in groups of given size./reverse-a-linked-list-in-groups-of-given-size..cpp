//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution{
    public:
    struct node *reverse(struct node*head,int k){ 
        vector<int>v;
          node*temp=head;
          while(temp!=NULL){
             v.push_back(temp->data);
             temp=temp->next;
          }
        int n=v.size();
        for(int i=0;i<n;i+=k){
            int left=i;
        int right=min(i+k-1,n-1);
        while (left<right)
            swap(v[left++],v[right--]);
    }
         node*dummy=new node(-1);
        node*temp2=dummy;
        for(int i=0;i<v.size();i++){
            node*newnode= new node(v[i]);
           dummy->next=newnode;
            dummy=dummy->next;
        }
        return temp2->next;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends