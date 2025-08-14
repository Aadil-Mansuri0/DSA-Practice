#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
int main (){
    Node* Head;
    Head = new Node (28);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    

}