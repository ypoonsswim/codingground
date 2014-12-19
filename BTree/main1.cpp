#include <iostream>
using namespace std;

struct Tree
{
    int data;
    Tree* llink=NULL;
    Tree* rlink=NULL;
};

void addTree(Tree* curr, int value)
{
    if(curr->data > value)
    {
        if(curr->llink)
            addTree(curr->llink, value);
        else
        {
            curr->llink = new Tree;
            curr->llink->data=value;
        }
    }
    else
    {
        if(curr->rlink)
            addTree(curr->rlink, value);
        else
        {
            curr->rlink = new Tree;   
            curr->rlink->data=value;
        }
    }
}

void print(Tree* curr)
{
    cout<<curr->data<<endl;
    if(curr->llink)
        print(curr->llink);
    if(curr->rlink)
        print(curr->rlink);
}

Tree* copyTree(Tree* curr)
{
    if(curr == NULL)
        Tree* treecopy= NULL;
    else
    {
        Tree* treecopy= new Tree;
        treecopy->data=curr->data;
        copyTree(treecopy->llink);
        copyTree(treecopy->rlink);
    }
    
    return treecopy;
}

int main()
{
   Tree* pine = new Tree;
   pine->data=2;
   addTree(pine,8);
   addTree(pine,3);
   addTree(pine,7);
   addTree(pine,2);
   addTree(pine,4);
   addTree(pine,5);
   addTree(pine,9);
   print(pine);
   Tree* pine2=copyTree(pine);
   print(pine2);
   return 0;
}
