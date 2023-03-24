#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define maxsize 40
int top=-1;
char stack[maxsize];

void push(char x)
{
    stack[++top]=x;
}
int pop()
{
   return stack[top--];
}
int prior(char x)
{
    int p;
    if(x=='#'|| x=='(') p=1;
    if(x=='+'|| x=='-') p=2;
    if(x=='*'|| x=='/') p=3;
    if(x=='^'|| x=='$') p=4;
    return p;
}

int main()
{
    char infix[50],postfix[50];
    printf("enter the infix operation");
    scanf("%s",infix);
    push('#');
    int j=0;
    for(int i=0;i<strlen(infix);i++)
    {
            if(isalnum(infix[i]))
            {
                postfix[j++]=infix[i];
            }
            else if(infix[i]=='(')
            {
                push(infix[i]);
            }
            else if(infix[i]==')')
            {
                while(stack[top]!='(')
                {
                    postfix[j++]=pop();
                    
                }
                pop();
            }
            else
            {
                    while(prior(stack[top])>=prior(infix[i]))
                    {
                            postfix[j++]=pop();
                    }
                    push(infix[i]);
            }
    }
    while(stack[top]!='#')
    {
        postfix[j++]=pop();
    }
    postfix[j++]='\0';
    printf("postfix expression is : ");
    puts(postfix);
}
