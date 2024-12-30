#include<stdio.h>

  int main()  {

          int size;
          printf("Enter size of Array:\n");
          scanf("%d",&size);

          int arr[size];
          printf("Enter element in array:\n");

          for(int i=0;i<size;i++)  {

                  scanf("%d",&arr[i]);

          }

          printf("Factorial of Array number:\n");
          for(int i=0;i<size;i++)  {

                  int sum=1;
                  int num=arr[i];

                  for(int j=arr[i];j>=1;j--)  {

                          sum=sum*j;

                  }
                  printf("%d\n",sum);
          }
  }
