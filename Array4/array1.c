#include<stdio.h>
  int main()  {

          int size;
          printf("Enter size of Array:\n");
          scanf("%d",&size);

          int arr[size];
          printf("Enter element in Array:\n");
          for(int i=0;i<size;i++)  {

                  scanf("%d",&arr[i]);
          }

          for(int i=0;i<size;i++)  {

                  int count=0;
                  for(int j=2;j<=arr[i]/2;j++)  {
                  if(arr[i]%j==0)  {

                          count++;
                  }
                  }
                  if(count==0)  {

                          printf("%d is prime\n",arr[i]);

                  }
          }
  }
