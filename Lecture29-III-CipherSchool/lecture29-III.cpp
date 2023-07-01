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

void Insertmiddleafterwhichelement(node *& head,int location,int data)
{
    node *temp= new node(data);

    node *var = head;

    while(var->data!= location)
    {
        var = var->next;
        if(var==NULL)
        {
            cout<<"the location doestn't exist, check the location again"<<endl;
            return;
        }
    }

    temp->next = var->next;
    var->next = temp;
}

void deletenodeoflinkedlist(node *&head,int data)
{
    if(head->data == data)
    {
        cout<<"the head of the linked list is going to be deleted !!"<<endl;
        head = head->next;
        return;
    }

    node *temp;
    node *pev;
    temp=head;

    while(temp->data!=data)
    {
        if(temp->next==NULL)
        {
            cout<<"the element to be deleted doesnt exist"<<endl;
            return;
        }
        prev=temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        prev->next = NULL;
        return;
    }

    prev->next = prev->next->next;
}


int main()
{
   node*head;

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

    Insertmiddleafterwhichelement(head,3,4);
    Insertmiddleafterwhichelement(head,5,6);
    // Insertmiddleafterwhichelement(head,100,101);

    printlinkedist(head);

    deletenodeoflinkedlist(head,2);
    deletenodeoflinkedlist(head,10);
    deletenodeoflinkedlist(head,6);
    deletenodeoflinkedlist(head,100);

    printlinkedist(head);
    return 0;
}
