#include<stdio.h>
int main()
{
long int array[1000];
int i,sum=0,n,k,missing=0;
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter numbers in the array:");
for(i=0;i<n-1*;i++)
scanf("%d",&a[i]);
k=(n*(n+1))/2;
for(i=0;i<n;i++)
sum=sum+a[i];
missing=k-sum;
printf("missing number is %d",missing);
return 0;
}