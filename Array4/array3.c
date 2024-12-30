#include<stdio.h>

  int main()  {

          int size;
          printf("Enter size of Array:");
          scanf("%d",&size);

          printf("Enter element in array:\n");
          int arr[size];
          for(int i=0;i<size;i++)  {

                  scanf("%d",&arr[i]);
          }

          int count=0;
          for(int i=0;i<size;i++)  {

                  int sum=0;

                  for(int j=1;j<=arr[i]/2;j++) {
                          if(arr[i]%j==0)  {

                                  sum=sum+j;

                          }
                  }
                          if(sum==arr[i])  {

                                  count++;
                          }

          }
          if(count==0)  {

                  printf("Array does not contain any perfect number\n");

          }  else  {

                   printf("Array contain perfect number\n");

	  }
  }
