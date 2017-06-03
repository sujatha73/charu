#include <stdio.h>
 
int main()
{
   int a[100], n, i, j, position, temp;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter all the elements\n", n);
 
   for ( i = 0 ; i< n ; i++ )
      scanf("%d", &a[i]);
 
   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      position =i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( a[position] > a[j] )
            position = j;
      }
         if(position!=i)
      {
         temp = a[i];
         a[i] = a[position];
         a[position] = temp;
      }
   }
 
   printf("Sorted  elements using selection sorting are\n");
 
   for ( int c = 0 ; c < n ; c++ )
      printf("%d\n", a[c]);
 
   return 0;
}


