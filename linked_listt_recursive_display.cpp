#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
}*first=NULL;

void create(int a[],int n)
{
   struct node *last,*t;
   first=(struct node *)malloc(sizeof(struct node));
   first->data=a[0];
   first->next=NULL;
   last=first;
   for(int i=1;i<n;i++)
   {
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
   }
}

void display(struct node *p)
{
     cout<<"display=";
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void rec_display(struct node *p)
{
   if(p!=NULL)
   {
    rec_display(p->next);
    cout<<p->data;
   }
   
}

int main()
{
  struct node *temp;
  int n;
  cout<<"Enter the array size";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  create(a,n);
  rec_display(first);
  display(first);
}