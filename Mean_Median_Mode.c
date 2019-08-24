#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void mean(int arr[],int s)
{
    float sum=0.0,mean=0.0;
    int i,j;
    for(i=0;i<s;i++)
    {
        sum=sum+arr[i];
        mean=sum/s;
    }
   // printf("%f\n",sum);
     printf(" mean is %f\n",mean);
}
void median(int arr[],int s)
{
    int x1;
    float median,sum2;
    if(s%2!=0)
    {
        x1=abs((s+1)/2);
        median=arr[x1-1];
        printf("median is %f\n",median);
    }
    else
    {
        median=(arr[(s-1)/2] + arr[s/2])/2.0;
        printf("median is %f\n",median);
    }

}
void mode(int arr[],int s)
{
    int i,j,maxCount=0,maxValue=0;
    for (i = 0; i < s; i++)
     {
        int count=0;
         for (j = 0; j < s; j++)
          {
              if (arr[j] == arr[i])
              {
                count++;
              }
          }      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
     }
   printf("mode is %d\n", maxValue);
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[30],i,j,s;
    //printf("enter the size of elements\n");
    scanf("%d\n",&s);
    //printf("enter the elements\n");
    for(i=0;i<s;i++)
    {
        scanf("%d\n",&arr[i]);
    }

   printf(" elements are:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }
    mean(arr,s);
    median(arr,s);
    mode(arr,s);
    return 0;

    

}
