#include<stdio.h>

  int main()  {

          int num;
          printf("Enter num\n");
          scanf("%d",&num);

          int count=1;
          int arr[count];
          for(int i=1;i<=num;i++)  {

                  if(num%i==0)  {

                          arr[count-1]=i;
                          count++;

                  }
          }

          printf("output:\nArray of factors of %d are:\n",num);

                  for(int i=0;i<count-1;i++)  {

                          printf("%d\n",arr[i]);

                  }
  }
