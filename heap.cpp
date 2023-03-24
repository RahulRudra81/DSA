#include<iostream>
#include<stdlib.h>
#define maxsize 10
using namespace std;
int insert(int item, int a[] , int n)
{
    int c,p;
    if(n==maxsize) 
    {
        cout<<"heap is full"<<endl;
       
    }
    else 
    {
        c=n;
        p=(c-1)/2;
        while(c!=0 && a[p]<item)
        {
            a[c]=a[p];
            c=p;
            p=(c-1)/2;
        }
        a[c]=item;
        return n+1;
    }
}
int display(int a[],int n)
{
    if(n==0)
    {
        cout<<"heap is empty";
      
    }
    else
    {
        cout<<"the array elements are :";
        for(int i=0;i<n;i++)

        {
            cout<<a[i]<<endl;
        }
    }
}
 int main()
 {
    int a[maxsize],n=0;
    int ch,item;
    while(1)
    {
        cout<<"\n 1 insert \n 2 display \n 3 exit"<<endl;
        cout<<"enter choice :";
        cin>>ch;
        switch(ch)
        {
            case 1 : cout<<"enter element :";
                    cin>>item;
                   n=insert(item,a,n);
                   break;
            
            case 2 : display(a,n);
            break;

            default : exit(0);
        }
    }

 }
