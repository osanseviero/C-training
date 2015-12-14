#include <iostream>
#include <vector>
#include <list>
using namespace std;

/*
    Given a binary tree, design an algorithm which creates a linked list of all the
    nodes at each depth
*/


struct node
{
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left=temp->right=NULL;
    return temp;
}

vector< list<node*> >createLevelLinkedList(node* root)
{
    vector< list<node*> > result;
    list<node*> current;
    
    // Visit the root
    if(root!=NULL)
        current.push_back(root);
    
    while(current.size() > 0)
    {
        result.push_back(current); //Add prev level list
        list<node*> parents = current; //Save list
        current.clear();//Clear it
        list<node*>::iterator it;
        
        //Traverse level
        for(it = parents.begin(); it != parents.end(); it++)
        {
            node* parent = *it;
            if(parent->left)
                current.push_back(parent->left);
            if(parent->right)
                current.push_back(parent->right);
        }
    }
    return result;
}

//PRINT A LIST
void printList(list<node*> li)
{
    list<node*>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<(*it)->data<<" ";
    }
}

//PRINT A VECTOR OF LISTS
void printVectorList(vector< list<node*> > result)
{
    for(int i=0; i<result.size();i++)
    {
        printList(result.at(i));
        cout<<endl;
    }
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);

    vector< list<node*> > result =  createLevelLinkedList(root);
    printVectorList(result);
    return 0;
}