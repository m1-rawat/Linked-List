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

    int x=3; // Insert position
    int value =30;

    Node *temp=Head;
    x--;

    while(x--){
        temp=temp->next;
    };
    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    //print the value
    // Node *temp;
    // temp=Head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp=temp->next;
    // }
    while(Head){
        cout << Head->data << " ";
        Head=Head->next;
    }
    
    }