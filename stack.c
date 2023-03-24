#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int main()
{
    int stack[maxsize],ch,x;
     int top=-1;
    while(1)
    {
       
        printf("\n 1.Insert \n 2. Delete \n 3. Display \n");
        printf("enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            if(top==maxsize)
            {
                printf("stack overflow");
            }
            else 
            {
                printf("enter element :");
                scanf("%d",&x);
                stack[top++]=x;
            }
                break;
            case 2 :
            if(top==-1)
            {
                printf("stack underflow");
            }
            else
            {
                printf("%d is deleted ",stack[top]);
                top--;
            }
            break;
            case 3 :
            if(top==-1)
            {
                printf("stack underflow");
            }
            else
            {
                for(int i=top;i>=0;i--)
                {
                    printf("%d ",stack[i]);
                }
            }
            break;
            default : exit(0);
            
        }
    }
}
