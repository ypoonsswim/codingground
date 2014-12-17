#include <iostream>
using namespace std;

struct Number
{   
    int data;
    Number* nextaddr;
};

/*void deletedata(Number*tt, int value)
{
    int i;
    for(i=0;tt[i].data!=value;i++){}
    tt[i-1].nextaddr=tt+(i+1);
}
*/
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

int main ()
{
   Number test;
   test.data=8;
   test.nextaddr=NULL;
   addAfter(&test,10);
   addAfter(&test,5);
   addAfter(&test,20);
   print(&test);
   //deletedata(test,3);
   //print(test);a
   return 0;
}
