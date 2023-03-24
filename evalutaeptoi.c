#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
# define maxsize 40
int stack[maxsize];
int top=-1;
int push(int x)
{
    if(top==maxsize-1) 
    {
        printf("stack overflow");
    }
    else stack[++top]=x;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else return stack[top--];
}
int isdig(char symbol)
{
    return (symbol>='0' && symbol <='9');
}
int res(int op1,int op2, char symbol)
{
    switch(symbol)
    {
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
    }
}

int main()
{
    char postfix[40];
    printf("enter expression ");
    scanf("%s",postfix);
    int a,b,op;
    char symbol;
    for(int i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdig(symbol))
        {
            
            push(symbol-'0');
        }
        else
        {
            a=pop();
            b=pop();
            op=res(a,b,symbol);
            push(op);
        }
    }
    printf("final result :");
    printf("%d",op);
}
