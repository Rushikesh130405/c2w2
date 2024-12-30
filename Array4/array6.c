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

          printf("The sum of digit of elements:\n");
          for(int i=0;i<size;i++)  {

                  int  count=0,re,sum=0;
                  while(arr[i]>0)  {

                          re=arr[i]%10;
                          arr[i]=arr[i]/10;
                          sum=sum+re;
                          count++;

                  }
                  printf("%d\n",sum);
          }
  }
