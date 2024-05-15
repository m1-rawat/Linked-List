#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
    data=value;
    next=NULL;
    }
};

Node* CreateLinkedList(int arr[],int index,int size){
    if (index==size) return NULL;
    Node* temp;
    temp =new Node(arr[index]);
    temp->next =CreateLinkedList(arr,index+1,size);

    return temp;
}
int main(){
    Node *Head ;
    Head = NULL;
    int arr[]={2,4,6,8,9};

    Head = CreateLinkedList(arr,0,5);


//DEletion 
/*    // start node
    if(Head!=NULL){
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    };

    //print the value
    // Node *temp;
    // temp=Head;
    while(Head){
        cout << Head->data << " ";
        Head=Head->next;
    }
    */

    // ending node delete
    if(Head!=NULL)
    {
        //only one node present
        if(Head->next==NULL){
            delete Head; 
            Head=NULL;
        }
        //more than 1 node
        else
        {
            Node *curr=Head;
            Node *prev=NULL;
            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }

    
    
    }