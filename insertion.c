#include <stdio.h>
#include<stdlib.h>
void recursiveInsertionSort(int arr[], int n){
   if (n <= 1)
      return;
   recursiveInsertionSort( arr, n-1 );
   int nth = arr[n-1];
   int j = n-2;
   while (j >= 0 && arr[j] > nth){
      arr[j+1] = arr[j];
      j--;
   }
   arr[j+1] = nth;
}
int main(){
   int array[5000],size,i;
   printf("Enter the size of the array: ");
   scanf("%d",&size);
      for(i=0;i<size;i++)
     array[i]=rand()%10000;  
   printf("\nUnsorted Elements of the array::");
   for(i=0;i<size;i++)
   {
     printf("\t%d",array[i]);
   }      
   recursiveInsertionSort(array, size);
   printf("\n\nSorted Array:\t");
   for (i=0; i < size; i++)
      printf("%d ",array[i]);
   return 0;
}
