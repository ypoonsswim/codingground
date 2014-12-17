#include <iostream>
using namespace std;

struct Number
{   
    int data;
    Number* nextaddr;
};

void addAfter(Number*tt, int value)
{
    Number* curr;
    while(tt)
    {
        curr=tt;
        tt=tt->nextaddr;    
    }
    
    Number* temp= new Number;
    temp->data=value;
    temp->nextaddr=NULL;
    curr->nextaddr=temp;
}

void print(Number* curr)
{
      while(curr)
        {
            cout<<curr->data<<endl;
            curr=curr->nextaddr;
        }
}

void deletenode(Number*tt, int value) // delete node except for the first node
{
    Number* curr=tt;
    while((tt->data != value) && tt)
    {
        curr=tt;
        tt=tt->nextaddr;
    }
    
    if(tt)
    {
        curr->nextaddr=tt->nextaddr;
    }
}

int main ()
{
   Number* head = new Number;
   head->data=8;
   head->nextaddr=NULL;
   addAfter(head,10);
   addAfter(head,5);
   addAfter(head,20);
   print(head);
   deletenode(head,10);
   print(head);
   return 0;
}
