//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   int a[5],b[5],N,i;
   //Declare all the variables[N, array a & array b, i] used in the code
   printf("Enter the number of elements\n");
   scanf("%d",&N);
   //Read the Value of N using scanf statement
   printf("Enter the array A elements\n");
   for(i=0;i<N;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
    b[i]=a[i];
   }
   printf("The elements of array A are:\n");
   for(i=0;i<N;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\nThe elements of array B are:\n");
   for(i=0;i<N;i++)
   {
     printf("%d\t",b[i]);
   }
   //Read the array elements using for loop and scanf statment
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   //Print the both array elements in using printf statement in the above specified format
   return 0; 
}
