#include<stdio.h>
#include<time.h>
void main()
{
int a[10],v,j,n,i;
clock_tstart,end;
printf("\n Enter the order of an array\n");
scanf("%d",&n);
start=clock();
printf("Enter the elements of an array\n");
for (i=1;i<=n;i++)
scanf("%d",&a[i]);
for (i=1;i<=n;i++)
{
v=a[i];
j=i-1;
while (j >= 00 && a[j] > v)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=v;
}
end = clock();
printf("\n The Sorted array is \n");
for (i=1;i<=n;i++)
printf("\n %d",a[i]);
printf("\nTime = %f",(double)(end-start)/CLOCKS_PER_SEC);
}
