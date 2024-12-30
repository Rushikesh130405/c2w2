#include<stdio.h>

  int main()  {

          int size;
          printf("Enter size of array:\n");
          scanf("%d",&size);

          int arr[size];
          printf("Enter element in array:\n");

          for(int i=0;i<size;i++)  {

                  scanf("%d",&arr[i]);

          }

          printf("Output:");
          int count=0;
          for(int i=0;i<size;i++)  {

                  int temp=arr[0];
                  if(temp<=arr[i])  {

                          count++;

                  }
          }
          if(count==size)  {

                  printf("This is an increasing array.\n");

          }  else  {

                   printf("This is not an increasing array.\n");

          }
  }
