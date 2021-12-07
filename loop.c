#include<stdio.h>
int main()
{
    int a,b,x;
    float c;
    do
    {
        printf("\n1: Addition\n");
        printf("2: Subtruction\n");
        printf("3: Multiplication\n");
        printf("4: division\n");
        printf("0: Exit\n");

        printf("Enter your choice..... \n");
        scanf("%d" ,&x);
        if (x!=0)
        {
            printf("Enter to operands\n");
            scanf("%d", &a);
            scanf("%d", &b);
        }
        switch (x)
        {
        case 1:
            c=a+b;
            printf("Answer : ");
            printf("%.1f\n ", c);
            break;
        
        case 2:
           c=a-b;
           printf("Answer : ");
           printf("%.1f\n "  ,c);
           break;

        case 3:
            c=a*b;
            printf("Answer : ");
            printf("%.1f\n "  ,c);
            break;

        case 4:
            
            c=(float)a/b; //Extrenal type casting

            printf("Answer : ");
            printf("%.4f\n " ,c);
            break;       
        }
            
    } while (x);
    return 0;
    
}