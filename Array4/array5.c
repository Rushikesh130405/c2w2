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

          printf("output:\nThe count of digits of elements\n");

          for(int i=0;i<size;i++)  {

                  int count=0,re;

                  while(arr[i]>0)  {

                          re=arr[i]%10;
                          arr[i]=arr[i]/10;
                          count++;

                  }
                  printf("%d\n",count);
          }
  }
