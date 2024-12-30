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

                  int temp=arr[i],rem,temp1=0;
                  while(arr[i]>0)  {

                          rem=arr[i]%10;
                          temp1=rem+(temp1*10);
                          arr[i]=arr[i]/10;

                  }
                  if(temp==temp1)  {

                          count++;

                  }
          }

          if(count==0)  {

                  printf("Array does not contain Palindrome number.\n");

	  }  else  {

		   printf("Array contain Palindrome number.\n");

	  }
  }
