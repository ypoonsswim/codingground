#include <iostream>
using namespace std;

struct Number
{   
    int data;
    Number* nextaddr;
};

void add(Number* curr, int value)
{
    Number temp;
    temp.data=value;
    temp.nextaddr=NULL;
    curr->nextaddr=&temp;
    cout<<curr<<endl;
    cout<<curr->nextaddr<<endl;
    cout<<(curr->nextaddr)->nextaddr<<endl;
}

void print(Number* curr)
{
    cout<<curr<<endl;
    cout<<curr->nextaddr<<endl;
    cout<<(curr->nextaddr)->nextaddr<<endl;
    /*  
      for(int i=0;curr;i++)
        {
            cout<<curr->data<<endl;
            curr=curr->nextaddr;
        }
    */
}

int main ()
{
   Number test;
   test.data=8;
   test.nextaddr=NULL;
   add(&test,10);
   print(&test);
   return 0;
}
