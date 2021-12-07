#include<stdio.h>

 struct student 
{
    char name[10];
    int roll ;
    float marks;
   

};
int main()
{

struct student x[10];

printf("Enter the name ,roll and marks of x : ");
scanf("%s" , &x.name);
scanf("%d" , &x.roll );
scanf("%f" , &x.marks);


printf("Enter the name, roll and marks of y : ");
scanf("%s" , &y.name);
scanf("%d" , &y.roll );
scanf("%f" , &y.marks);

printf(" name      Roll No.      Marks\n");
printf("%s                %d             %f\n",x.name,x.roll,x.marks);
printf("%s                 %d             %f\n",y.name,y.roll,y.marks);




return 0;
}

