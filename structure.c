#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee emp[5];
    int n;
     int ch;
       int search;
    printf("Enter no of employees : ");
    scanf("%d",&n);
    printf ("enter employee deatils : ");
    for(int i=0;i<n;i++)
    {
        printf("\n Enter %d employee id : ",i+1);
        scanf("%d",&emp[i].id);
         printf("Enter %d employee name : ",i+1);
         scanf("%s",emp[i].name);
        
          printf("Enter %d employee salary :",i+1);
          scanf("%f",&emp[i].salary);
    }

    while(1)
    {
       
        printf("\n1. display \n 2.search \n 3.exit\n");
        printf("enter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: 
            for(int i=0;i<n;i++)
            {
                printf("\n employee id : %d \n employee name : %s \n employee salary : %f",emp[i].id,emp[i].name,emp[i].salary);

            }
            break;

            case 2 :
          
            printf("Enter id to search :");
            scanf("%d",&search);
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(emp[i].id==search)
                {
                    printf("employee id : %d \n employee name : %s \n employee salary : %f",emp[i].id,emp[i].name,emp[i].salary);
                    flag=1;
                    break;
                }
            }
            if(flag==0) printf("emplyee id not matched");
            break;

            default : exit(0);
        }
    }


}
