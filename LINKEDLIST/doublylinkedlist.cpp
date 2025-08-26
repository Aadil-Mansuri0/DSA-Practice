#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insertion at starting
void insertatHead( Node* &tail,Node* &head, int d)
{
    if(head == NULL){
    Node *temp = new Node(d); 
    head = temp;
    tail = temp ;
    }
    else {
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
  }
// insertion at ending
void insertatTail(Node *&tail, Node* &head, int d)
{
    if(head == NULL){
    Node *temp = new Node(d); 
    head = temp;
    tail = temp ;
    }
    else {
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
 }
// insertion at particular position
void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertatHead(tail,head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertatTail(tail, head, d);
        return;
    }

    Node *temp2 = new Node(d);
    temp2->next = temp->next;
    temp->next->prev = temp2;
    temp->next = temp2;
    temp2->prev = temp;
}
int getlength(Node *head)
{
    int length = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
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
  
    Node *head = NULL;
    Node *tail = NULL;
    

    insertatHead(tail,head, 14);
    print(head);

    insertatHead(tail,head, 16);
    print(head);
   
    insertatTail(tail,head, 35);
    print(head);

    insertatposition( tail,head, 3, 56);
    print(head);

    cout << getlength(head) << endl;
    return 0;
}
