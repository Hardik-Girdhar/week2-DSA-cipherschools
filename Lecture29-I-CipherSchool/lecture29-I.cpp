#include<iosteam>
using namespace std;

class node
{
    public:

    int data;
    node * next;

    node(int data_input)
    {
        this->data =data_input;
        this->next = NULL;
    }
};

void printnode(node * &node)
{
    cout<<"value " <<node->data;
    cout<<"address"<<node->next;
}

void printlinkedist(node * &head)
{
    if(head==NULL)
    {
        cout<<"the linked list is still empty!!"<<endl;
        return ;
    }

    node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<endl;
}

void Insertstart(node *head,int data)
{
    node * temp=new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    temp->next=head;
    head=temp;
}

void Insertend(node *&head,int data)
{
    node *temp=new node(data);


    if(head==NULL)
    {
        head = temp;
        return;
    }

    node *end;
    end = head;

    while(end->next!=NULL)
    {
        end = end->next;
    }

     end->next = temp;
}


int main()
{

    // node*head;

    // // printlinkedist(head);

    // Insertend(5);
    // Insertend(7);
    // Insertend(8);

    // node * node1 = new node(5);
    // head = node1;
    // // printlinkedist(head);
    // // cout<<endl;

    // node * node2 = new node(7);
    // node1->next = node2;
    // // printlinkedist(head);
    // // cout<<endl;

    // node * node3 = new node(8);
    // node2->next = node3;
    // printlinkedist(head);
    // cout<<endl;

    // cout<<node1->data;
    // printnode(node1);
    // printnode(node2);
    // printnode(node3);

    
    

    // printnode(node1);
    // cout<<endl<<node2;
    // printnode(node2);
    // cout<<endl<<node3;
    // printnode(node3);
    // printnode(node1->next);
    // printnode(node1->next->next);

    // node * head;
    // head = node1;

   node*head;

    // printlinkedist(head);

    Insertend(head,5);
    Insertend(head,7);
    Insertend(head,8);
    
Insertstart(head,3);
// printlinkedist(head);
Insertstart(head,2);
// printlinkedist(head);
Insertstart(head,9);
Insertstart(head,10);

printlinkedist(head);

    return 0;
}
