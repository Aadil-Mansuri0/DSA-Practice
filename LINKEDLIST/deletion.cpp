#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
       this->data = data;
       this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if( this->next != NULL ){
            delete next;
            this->next = NULL;
            cout<<value<<" ";
        }
    }
}; // insertion at starting
void insertatHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}  
// insertion at ending
void insertatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
// insertion at particular position
void insertatposition(Node* &tail,Node *&head , int position, int d)
{ 
    if(position == 1){
        insertatHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertatTail(tail,d);
       return;
    }

    Node *temp2 = new Node(d);
    temp2->next = temp->next;
    temp->next = temp2;
}

void deleteNode(int position,Node* &head ){
    if(position == 1){
        Node* temp = head;
        head =head->next;
        temp->next= NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt< position){
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertatHead(head, 14);
    print(head);
    insertatHead(head, 16);
    print(head);
    insertatTail(tail, 34);
    print(head);
    insertatTail(tail, 96);
    print(head);
    insertatposition( tail,head, 3, 56);
    print(head);
     insertatposition(tail,head, 1, 29);
    print(head);
    insertatposition(tail,head, 7, 49);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(7,head);
    print(head);
    deleteNode(4,head);
    print(head);
    return 0;
}
