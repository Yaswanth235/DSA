//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
#include<vector>
class Solution{
    public:
    void rearrangeEvenOdd(Node *head){
         vector<int>v1,v2;
        int i=0;
        Node* temp=head;
        while(temp!=NULL){
            i++;
            if(i%2!=0)
            v1.push_back(temp->data);
            else
            v2.push_back(temp->data);
        temp=temp->next;
        }
        temp=head;
        for(int i=0;i<v1.size();i++){
          temp->data=v1[i];
          temp=temp->next;
        }
        for(int i=0;i<v2.size();i++){
          temp->data=v2[i];
          temp=temp->next;
        }
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends