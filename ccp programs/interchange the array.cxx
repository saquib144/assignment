#include<stdio.h>
 int main()
  {
    int i,k,j;
    int arr[6]={63,3,96,7,85,14};
    printf("the unarranged array = ");
    for ( i=0;i<6; i++)
      printf("%d\t",arr[i] );
      printf("\n");
      k=0;
      for (i=0;i<6;i++)
      { for(j=0;j<6;j++)
        {if(arr[i]<arr[j])
        {
        k=arr[i];
        arr[i]=arr[j];
        arr[j]=k;
      }
    }
    }
    printf("the arranged array is = ");
    for ( i=0;i<6; i++)
      printf("%d\t",arr[i] );
  return 0;
}