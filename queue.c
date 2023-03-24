#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int q[maxsize];
int f=-1,r=-1;

int push()
{
    int x;
    if(r==maxsize-1)
    {
        printf("Queue overflow");

    }
    else
    {
        if(r==-1) f=0;
        printf("enter element :");
        scanf("%d",&x);
        q[++r]=x;

    }
}
int pop()
{
    if(f==-1) printf("queue underflow");
    else
    {
        printf("%d deleted",q[f++]);
    }
    if(f>r)
    {
        f=-1;
        r=-1;
    }
}
int display()
{
    if(f==-1) printf("queue underflow");
    else
    {
        printf("elements are : " );
        for(int i=f;i<=r;i++) printf("%d ",q[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf ("\n 1.insert \n 2. delete \n 3. display \n 4. exit \n");
        printf("enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;

            default : exit(0);
        }

    }
}
