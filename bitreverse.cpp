#include <iostream>
 
using namespace std;
 

void bitreverse(int* a, int position)
{
    *a=2^position xor *a  ;
}

int main ()
{
   int b=5;
   int* a;
   a=&b;
   bitreverse(a,0);
   cout<< *a <<endl;
   
   return 0;
}
