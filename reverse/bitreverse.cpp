// I am writing a funtion that can reverse one bit in the data.

#include <iostream>
#include <math.h>    
using namespace std;
 
void bitreverse(int* a, int position)
{
    int c=pow(2,position);
    *a= c xor *a;
}

int main ()
{
   int b=5;
   bitreverse(&b,1);
   cout<< b << endl;
   return 0;
}
