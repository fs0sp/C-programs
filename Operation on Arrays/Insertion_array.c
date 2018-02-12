#include <stdio.h>
 
int main()
{
   int A[20],position,i,n,value;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i= 0;i<n;i++)
   {
      scanf("%d", &A[i]);
   }
   printf("Enter the location where you want to insert an element");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (i=n-1;i>=position-1;i--)
   {
      A[i+1] = A[i];
   }
   A[position-1] = value;
 
   printf("Array after insertion is\n");
 
   for (i=0;i<= n;i++)
   {
      printf("%d\n", A[i]);
   }
   return 0;
}
