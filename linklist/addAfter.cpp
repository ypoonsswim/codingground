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

void deletenode(Number*tt, int value)
{
    Number* curr;
    while((tt->data != value) && tt)
    {
        curr=tt;
        tt=tt->nextaddr;
    }
    
    if(tt)
    {
        curr=tt->nextaddr;
    }
}

int main ()
{
   Number test;
   test.data=8;
   test.nextaddr=NULL;
   addAfter(&test,10);
   addAfter(&test,5);
   addAfter(&test,20);
   print(&test);
   deletenode(&test,0);
   print(&test);
   return 0;
}
