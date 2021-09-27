#include<stdio.h>
void BubbleSortRecursion(int a[],int num);
int main()
{
int i,j,num;
printf("Enter number of elements: ");
scanf("%d",&num);
int a[num];
  for(i=0;i<num;i++)
     a[i]=rand()%10000;  
   printf("\nUnsorted Elements of the array::\n");
   for(i=0;i<num;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\n");
BubbleSortRecursion(a,num);
printf("\n Sorted elements of the array: \n");
for(i=0;i<num;i++)
{
 printf("%d\t",a[i]);
}
printf("\n");
return 0;
}
void BubbleSortRecursion(int a[],int num)
{
 int i,j,temp;
 i=num;
if(i>0)
  {
       for(j=0;j<num-1;j++)
       {
         if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
  BubbleSortRecursion(a,num-1);
  }
else
  {
       return;
   }
}
