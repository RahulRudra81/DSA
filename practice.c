#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define maxsize 40
int stack[maxsize];
int top=-1;

void push(char x){
    if(top==maxsize-1) printf("Stack overflow!!!");
    else{
        stack[++top]=x;
    }
}
int pop(){
    if(top==-1) printf("Stack underflow!!");
    else return stack[top--];
}
int isdig(char symbol){
    return (symbol>='0' && symbol<='9');
}
int res(int a,int b,char symbol){
    switch(symbol){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
    }
}

int main(){
    char postfix[40];
    int ans;
    printf("Enter the postfix expression:");
    scanf("%s",postfix);
    char symbol;
    for(int i=0;i<strlen(postfix);i++){
        symbol=postfix[i]; 
        if(isdig(symbol)){
            push(symbol-'0');
        }
        else{
            int a=pop();
            int b=pop();
            ans=res(a,b,symbol);
            push(ans);
        }
    }
    printf("Final answer is: %d",ans);
    

}