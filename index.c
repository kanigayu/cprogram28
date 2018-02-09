#include<stdio.h>
int main()
{
int a[100],i,num;
printf("Enter the size");
scanf("%d",&num);
printf("Enter the element\n"); 
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("%d%d\n",i,a[i]);
}
return 0;
}
