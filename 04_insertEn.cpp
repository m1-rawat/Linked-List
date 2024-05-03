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
int main(){
    Node *Head , *Tail;
    Tail = Head= NULL;

    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++){

    //iNSERT the value at End

    //Linked list is empty
    if (Head == NULL) {
        Head=new Node(arr[i]);
        Tail=Head;
    }

    //Linked list exist 
    else{
        Tail->next=new Node(arr[i]);
        Tail = Tail->next;
    }
    }

    //print the value
    Node *temp;
    temp=Head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }

}