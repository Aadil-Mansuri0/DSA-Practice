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
     ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
            cout << value << " ";
        }
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
// deletion
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next ->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
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

    deleteNode(4, head);
    print(head);
   
    cout << getlength(head) << endl;
    return 0;
}
