#include <iostream>
using namespace std;

struct Tree
{
    int data;
    Tree* llink;
    Tree* rlink;
};

void addTree(Tree* curr, int value)
{
    if(curr->data > value)
    {
        if(curr->llink)
            addTree(curr->llink, value);
        else
            curr->llink = new Tree;    
    }
    else
    {
        if(curr->rlink)
            addTree(curr->rlink, value);
        else
            curr->rlink = new Tree;
            
    }
}


int main()
{
   Tree* pine = new Tree;
   pine->data=10;
   pine->llink=NULL;
   pine->rlink=NULL;
   addTree(pine,20);
   
   return 0;
}
