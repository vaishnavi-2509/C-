#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

int main()
{
    int A[]={3,5,10,15};
    node* head=new node;
    node* temp;
    node* last;

    head->data=A[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;
    }

    node* p=head;

    while(p!=NULL)
    {
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }
return 0;
}
