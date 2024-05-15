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



void printCircularLL(node* first){
    node *temp = first;
    
    if (first !=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
        while(temp !=first) {
            cout << temp->data << endl;
            temp=temp->next;
    } 
    } 
}
int main(){
    printCircularLL(Head);
}