#include <iostream>
using namespace std;

struct Number
{   
    int data;
    Number* nextaddr;
};

void print(Number* tt)
{
      Number* curr=tt;
      for(int i=0;curr;i++)
        {
            cout<<curr->data<<endl;
            curr=curr->nextaddr;
        }
}

/*void deletedata(Number*tt, int value)
{
    int i;
    for(i=0;tt[i].data!=value;i++){}
    tt[i-1].nextaddr=tt+(i+1);
}
*/
void add(Number*tt, int value)
{
    Number temp;
    temp.data=value;
    temp.nextaddr=NULL;
    tt.nextaddr=temp;
}

int main ()
{
   Number test;
   test.data=8;
   test.nextaddr=NULL;
   add(test,10);
   print(test);
   //deletedata(test,3);
   //print(test);
   return 0;
}