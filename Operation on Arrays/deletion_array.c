#include <stdio.h>
 
int main()
{
   int A[20],position,i,n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i= 0;i<n;i++)
   {
      scanf("%d", &A[i]);
   }
   printf("Enter the location where you want to delete an element");
   scanf("%d", &position);
 
   
 
   for (i=position-1;i<n-1;i++)
   {
      A[i] = A[i+1];
   }
 
   printf("Array after deletion is\n");
 
   for (i=0;i<= n;i++)
   {
      printf("%d\n", A[i]);
   }
   return 0;
}
