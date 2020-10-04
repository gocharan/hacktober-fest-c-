#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next,*prev;

};
struct node* start,*last;

void insertBegin(int d)
{
node *t= new node;
t->data=d;

if(start==NULL)
{
start=t;  last=t;   t->prev=NULL; t->next=NULL;
}
else
    {
        t->prev=NULL;
        t->next=start;
        start->prev=t;
        start=t;
    }

}

void display()
{
if(start==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
    {
    node *p=start;
    cout<<" List contains  -->";
    while(p!=NULL)
    {
    cout<<p->data<<"\t";
    p=p->next;
    }
    cout<<endl;
    }
}





int main()
{

 insertBegin(20);
  insertBegin(22);
  insertBegin(23);
  display();

}
