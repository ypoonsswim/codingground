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
    cout<<curr->data<<endl;
    if(curr->data > value)
    {
        if(curr->llink)
            addTree(curr->llink, value);
        else
            curr->llink = new Tree;    
    }
    else
    {
        cout<<"test"<<endl;
        if(curr->rlink)
            addTree(curr->rlink, value);
        else
            curr->rlink = new Tree;
            
    }
}


int main()
{
   Tree* pine;
   pine->data=10;
   pine->llink=NULL;
   pine->rlink=NULL;
   addTree(pine,20);
   cout << pine->data  << endl; 
   
   return 0;
}

