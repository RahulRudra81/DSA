#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first, *cur, *prev;
void insertfront()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("enter the node to be inserted \n");
    scanf("%d",&temp->info);
    if(first==NULL)
    {
        first=temp;
        return;
    }
    temp->link=first;
    first=temp;
}
void deletefront()
{
    if(first==NULL)
    {
        printf("list is empty \n");
        return;
    }
    cur=first;
    first=first->link;
    printf("item deleted is %d \n", cur->info);
    free(cur);
}
void insertrear()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("enter the node to be inserted \n");
    scanf("%d",&temp->info);
    if(first==NULL)
    {
        first=temp;
        return;
    }
    cur=first;
    while(cur->link!=NULL)
    cur=cur->link;
    cur->link=temp;
}
void deleterear()
{
    if(first==NULL)
    {
        printf("list is empty \n");
        return;
    }
    if(first->link==NULL)
    {
        free(first);
        first=NULL;
        return;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("item deleted is %d \n", cur->info);
    free(cur);
    prev->link=NULL;
}
void display()
{
 if(first==NULL)
    {
        printf("list is empty \n");
        return;
    }
    printf("list is: \n");
    cur=first;
    while(cur!=NULL)
    {
        printf("%d \n", cur->info);
        cur=cur->link;
    }
}
int main()
{
    int ch;
    printf("enter 1.insert at front \n 2.delete at front \n 3.insert at rear \n 4.delete at rear\n 5.display\n");
    for(;;)
    {
        printf("enter the choice \n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insertfront();
            break;
            case 2: deletefront();
            break;
            case 3: insertrear();
            break;
            case 4: deleterear();
            break;
            case 5: display();
            break;
            default : exit(0);
        }
    }
}
