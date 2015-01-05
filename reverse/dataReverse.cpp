// reverse all the bits in the data
// not yet finished

#include <iostream>
#include <math.h>    
using namespace std;
 
void dataReverse(int* a)
{
    int c=pow(2,position)-1;
    *a= c xor *a;
}

int main ()
{
   int b=5;
   dataReverse(&b);
   cout<< b << endl;
   return 0;
}
