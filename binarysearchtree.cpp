#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node * root=NULL, * temp;
void insert()
{
    struct node *nc,*prev;
    temp= new node;
    int v;
    cout<<"enter value :";
    cin>>v;
    temp-> data= v;
    temp-> left = NULL;
    temp-> right=NULL;
    if(root == NULL)
    {
        root= temp;
    }
    else
    {
        nc=root;
        while(nc!=NULL)
        {
            prev=nc;
            if(v<nc->data) nc=nc-> left;
            else nc=nc-> right;
        }
        if(v<prev-> data) prev-> left =temp;
        else prev-> right = temp; 
    }

}
void inorder(struct node* temp)
{
    if(temp!=NULL)
    {
        inorder(temp-> left);
        cout<<temp-> data<<" "<<endl;
        inorder(temp-> right);
    }
}
void postorder(struct node* temp)
{
    if(temp!=NULL)
    {
        postorder(temp-> left);
       
         postorder(temp-> right);
          cout<<temp-> data<<" "<<endl;
    }
}
void preorder(struct node* temp)
{
    if(temp!=NULL)
    {
        cout<<temp-> data<<" "<<endl;
        preorder(temp-> left);
        preorder(temp-> right);
    }
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\n 1.insert \n 2. inorder \n 3. preorder \n 4. postorder \n 5 . exit \n";
        cout<<"enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1 : insert();
            break;
            case 2 : inorder(root);
            break;
             case 3 : preorder(root);
            break;
             case 4 : postorder(root);
            break;
            default: exit(0);

        }
    }
}
