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

          printf("output:");
          int count=0;

          for(int i=0;i<size;i++)  {

                  if(arr[i]==1)  {

                          count=0;

                  }  else  {
                  int re,sum=0,temp=arr[i];
                  while(arr[i]>0)  {

                          re=arr[i]%10;
                          int pr=1;
                          for(int i=1;i<=re;i++)  {

                                  pr=pr*i;

                          }
                          sum=sum+pr;
                          arr[i]=arr[i]/10;
		  }
		  if(sum==temp)  {

                          count++;

                  }
          }
          }


          if(count==0)  {

          printf("Array does not contain any strong number.\n");

          }  else  {

          printf("Array contain strong number.\n");

          }
  }
